#include "stdafx.h"
#include "helper.hpp"

#include "SDK\Engine_classes.hpp"
#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <inipp/inipp.h>
#include <safetyhook.hpp>

#define spdlog_confparse(var) spdlog::info("Config Parse: {}: {}", #var, var)

HMODULE exeModule = GetModuleHandle(NULL);
HMODULE thisModule;

// Fix details
std::string sFixName = "STALKER2Tweak";
std::string sFixVersion = "0.0.1";
std::filesystem::path sFixPath;

// Ini
inipp::Ini<char> ini;
std::string sConfigFile = sFixName + ".ini";

// Logger
std::shared_ptr<spdlog::logger> logger;
std::string sLogFile = sFixName + ".log";
std::filesystem::path sExePath;
std::string sExeName;

// Aspect ratio / FOV / HUD
std::pair DesktopDimensions = { 0,0 };
const float fPi = 3.1415926535f;
const float fNativeAspect = 1.777777791f;
float fAspectRatio;
float fAspectMultiplier;
float fHUDWidth;
float fHUDWidthOffset;
float fHUDHeight;
float fHUDHeightOffset;

// Ini variables
bool bFixAspect = true;
bool bFixFOV = true;
bool bEnableConsole = true;

// Variables
int iCurrentResX;
int iCurrentResY;
int iOldResX;
int iOldResY;

void Logging()
{
    // Get path to DLL
    WCHAR dllPath[_MAX_PATH] = { 0 };
    GetModuleFileNameW(thisModule, dllPath, MAX_PATH);
    sFixPath = dllPath;
    sFixPath = sFixPath.remove_filename();

    // Get game name and exe path
    WCHAR exePath[_MAX_PATH] = { 0 };
    GetModuleFileNameW(exeModule, exePath, MAX_PATH);
    sExePath = exePath;
    sExeName = sExePath.filename().string();
    sExePath = sExePath.remove_filename();

    // Spdlog initialisation
    try {
        logger = spdlog::basic_logger_st(sFixName.c_str(), sExePath.string() + sLogFile, true);
        spdlog::set_default_logger(logger);
        spdlog::flush_on(spdlog::level::debug);

        spdlog::info("----------");
        spdlog::info("{:s} v{:s} loaded.", sFixName.c_str(), sFixVersion.c_str());
        spdlog::info("----------");
        spdlog::info("Log file: {}", sFixPath.string() + sLogFile);
        spdlog::info("----------");
        spdlog::info("Module Name: {0:s}", sExeName.c_str());
        spdlog::info("Module Path: {0:s}", sExePath.string());
        spdlog::info("Module Address: 0x{0:x}", (uintptr_t)exeModule);
        spdlog::info("Module Timestamp: {0:d}", Memory::ModuleTimestamp(exeModule));
        spdlog::info("----------");
    }
    catch (const spdlog::spdlog_ex& ex) {
        AllocConsole();
        FILE* dummy;
        freopen_s(&dummy, "CONOUT$", "w", stdout);
        std::cout << "Log initialisation failed: " << ex.what() << std::endl;
        FreeLibraryAndExitThread(thisModule, 1);
    }  
}

void Configuration()
{
    // Inipp initialisation
    std::ifstream iniFile(sFixPath.string() + sConfigFile);
    if (!iniFile) {
        AllocConsole();
        FILE* dummy;
        freopen_s(&dummy, "CONOUT$", "w", stdout);
        std::cout << "" << sFixName.c_str() << " v" << sFixVersion.c_str() << " loaded." << std::endl;
        std::cout << "ERROR: Could not locate config file." << std::endl;
        std::cout << "ERROR: Make sure " << sConfigFile.c_str() << " is located in " << sFixPath.string().c_str() << std::endl;
        spdlog::shutdown();
        FreeLibraryAndExitThread(thisModule, 1);
    }
    else {
        spdlog::info("Config file: {}", sFixPath.string() + sConfigFile);
        ini.parse(iniFile);
    }

    // Parse config
    ini.strip_trailing_comments();
    spdlog::info("----------");

    // Load settings from ini
    inipp::get_value(ini.sections["Fix Aspect Ratio"], "Enabled", bFixAspect);
    inipp::get_value(ini.sections["Fix FOV"], "Enabled", bFixFOV);
    inipp::get_value(ini.sections["Developer Console"], "Enabled", bEnableConsole);

    // Log ini parse
    spdlog_confparse(bFixAspect);
    spdlog_confparse(bFixFOV);
    spdlog_confparse(bEnableConsole);

    spdlog::info("----------");
}

void UpdateOffsets()
{
    // GObjects
    std::uint8_t* GObjectsScanResult = Memory::PatternScan(exeModule, "48 8B ?? ?? ?? ?? ?? 48 8B ?? ?? 48 8D ?? ?? EB ?? 33 ?? 8B ?? ?? C1 ??");
    if (GObjectsScanResult) {
        spdlog::info("Offsets: GObjects: Address is {:s}+{:x}", sExeName.c_str(), GObjectsScanResult - (std::uint8_t*)exeModule);
        std::uint8_t* GObjectsAddr = Memory::GetAbsolute(GObjectsScanResult + 0x3);
        SDK::Offsets::GObjects = GObjectsAddr - (std::uint8_t*)exeModule;
        spdlog::info("Offsets: GObjects: {:x}", SDK::Offsets::GObjects);
    }
    else {
        spdlog::error("Offsets: GObjects: Pattern scan failed.");
    }

    // GNames
    std::uint8_t* GNamesScanResult = Memory::PatternScan(exeModule, "74 ?? 48 8D ?? ?? ?? ?? ?? EB ?? 48 8D ?? ?? ?? ?? ?? E8 ?? ?? ?? ?? C6 ?? ?? ?? ?? ?? 01");
    if (GNamesScanResult) {
        spdlog::info("Offsets: GNames: Address is {:s}+{:x}", sExeName.c_str(), GNamesScanResult - (std::uint8_t*)exeModule);
        std::uint8_t* GNamesAddr = Memory::GetAbsolute(GNamesScanResult + 0x5);
        SDK::Offsets::GNames = GNamesAddr - (std::uint8_t*)exeModule;
        spdlog::info("Offsets: GNames: {:x}", (uintptr_t)SDK::Offsets::GNames);
    }
    else {
        spdlog::error("Offsets: GNames: Pattern scan failed.");
    }

    // ProcessEvent
    std::uint8_t* ProcessEventScanResult = Memory::PatternScan(exeModule, "40 ?? 56 57 41 ?? 41 ?? 41 ?? 41 ?? 48 81 ?? ?? ?? ?? ?? 48 8D ?? ?? ?? 48 89 ?? ?? ?? ?? ?? 48 8B ?? ?? ?? ?? ?? 48 33 ?? 48 89 ?? ?? ?? ?? ?? 4D ?? ??");
    if (ProcessEventScanResult) {
        spdlog::info("Offsets: ProcessEvent: Address is {:s}+{:x}", sExeName.c_str(), ProcessEventScanResult - (std::uint8_t*)exeModule);
        SDK::Offsets::ProcessEvent = ProcessEventScanResult - (std::uint8_t*)exeModule;
        spdlog::info("Offsets: ProcessEvent: {:x}", (uintptr_t)SDK::Offsets::ProcessEvent);
    }
    else {
        spdlog::error("Offsets: ProcessEvent: Pattern scan failed.");
    }
}

void EnableConsole() {
    // Get GEngine
    SDK::UEngine* Engine = nullptr;

    for (int i = 0; i < 200; ++i) { // 20s
        Engine = SDK::UEngine::GetEngine();

        if (Engine && Engine->ConsoleClass && Engine->GameViewport)
            break;

        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    if (!Engine || !Engine->ConsoleClass || !Engine->GameViewport) {
        spdlog::error("Enable Console: Failed to find GEngine address after 20 seconds.");
        return;
    }

    spdlog::info("Enable Console: GEngine address = {:x}", (uintptr_t)Engine);

    // Construct console
    SDK::UObject* NewObject = SDK::UGameplayStatics::SpawnObject(Engine->ConsoleClass, Engine->GameViewport);
    if (NewObject) {
        Engine->GameViewport->ViewportConsole = static_cast<SDK::UConsole*>(NewObject);
        spdlog::info("Construct Console: Console object constructed.");
    }
    else {
        spdlog::error("Enable Console: Failed to construct console object.");
        return;
    }

    // Check console key bind
    SDK::UInputSettings* InputSettings = SDK::UInputSettings::GetDefaultObj();
    if (InputSettings) {
        if (InputSettings->ConsoleKeys && InputSettings->ConsoleKeys.Num() > 0) {
            spdlog::info("Enable Console: Console enabled - access it using key: {}.", InputSettings->ConsoleKeys[1].KeyName.ToString().c_str());
        }
        else {
            spdlog::error("Enable Console: Console enabled but no console key is bound.\nAdd this to %LOCALAPPDATA%\\Stalker2\\Saved\\Config\\WindowsNoEditor\\Input.ini -\n[/Script/Engine.InputSettings]\nConsoleKeys = Tilde");
        }
    }
    else {
        spdlog::error("Enable Console: Failed to retreive input settings.");
    }
}

void CalculateAspectRatio(bool bLog)
{
    if (iCurrentResX <= 0 || iCurrentResY <= 0)
        return;

    if (iCurrentResX == 0 || iCurrentResY == 0) {
        spdlog::error("Current Resolution: Resolution invalid, using desktop resolution instead.");
        iCurrentResX = DesktopDimensions.first;
        iCurrentResY = DesktopDimensions.second;
    }

    // Calculate aspect ratio
    fAspectRatio = (float)iCurrentResX / (float)iCurrentResY;
    fAspectMultiplier = fAspectRatio / fNativeAspect;

    // HUD 
    fHUDWidth = (float)iCurrentResY * fNativeAspect;
    fHUDHeight = (float)iCurrentResY;
    fHUDWidthOffset = (float)(iCurrentResX - fHUDWidth) / 2.00f;
    fHUDHeightOffset = 0.00f;
    if (fAspectRatio < fNativeAspect) {
        fHUDWidth = (float)iCurrentResX;
        fHUDHeight = (float)iCurrentResX / fNativeAspect;
        fHUDWidthOffset = 0.00f;
        fHUDHeightOffset = (float)(iCurrentResY - fHUDHeight) / 2.00f;
    }

    // Log details about current resolution
    if (bLog) {
        spdlog::info("----------");
        spdlog::info("Current Resolution: Resolution: {:d}x{:d}", iCurrentResX, iCurrentResY);
        spdlog::info("Current Resolution: fAspectRatio: {}", fAspectRatio);
        spdlog::info("Current Resolution: fAspectMultiplier: {}", fAspectMultiplier);
        spdlog::info("Current Resolution: fHUDWidth: {}", fHUDWidth);
        spdlog::info("Current Resolution: fHUDHeight: {}", fHUDHeight);
        spdlog::info("Current Resolution: fHUDWidthOffset: {}", fHUDWidthOffset);
        spdlog::info("Current Resolution: fHUDHeightOffset: {}", fHUDHeightOffset);
        spdlog::info("----------");
    }
}

void CurrentResolution()
{
    // Grab desktop resolution/aspect just in case
    DesktopDimensions = Util::GetPhysicalDesktopDimensions();
    iCurrentResX = DesktopDimensions.first;
    iCurrentResY = DesktopDimensions.second;
    CalculateAspectRatio(false);

    // Current Resolution
    std::uint8_t* CurrentResolutionScanResult = Memory::PatternScan(exeModule, "48 89 ?? ?? ?? 8B ?? 45 ?? ?? 74 ?? 41 ?? ?? 01 74 ?? 41 ?? ?? 01");
    if (CurrentResolutionScanResult) {
        spdlog::info("Current Resolution: Address is {:s}+{:x}", sExeName.c_str(), CurrentResolutionScanResult - (std::uint8_t*)exeModule);
        static SafetyHookMid CurrentResolutionMidHook{};
        CurrentResolutionMidHook = safetyhook::create_mid(CurrentResolutionScanResult,
            [](SafetyHookContext& ctx) {
                int iResX = (int)ctx.rcx;
                int iResY = (int)ctx.rdx;

                if (iResX != iCurrentResX || iResY != iCurrentResY) {
                    iCurrentResX = iResX;
                    iCurrentResY = iResY;
                    CalculateAspectRatio(true);
                }
            });
    }
    else {
        spdlog::error("Current Resolution: Pattern scan failed.");
    }
}

void AspectRatioFOV()
{
    if (bFixAspect) {
        // Aspect Ratio / FOV
        std::uint8_t* AspectRatioFOVScanResult = Memory::PatternScan(exeModule, "F3 0F ?? ?? ?? 0F 57 C0 8B ?? ?? ?? ?? ?? 89 ?? ?? 0F ?? ?? ?? ?? ?? ??");
        if (AspectRatioFOVScanResult) {
            spdlog::info("Aspect Ratio/FOV: Address is {:s}+{:x}", sExeName.c_str(), AspectRatioFOVScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid FOVMidHook{};
            FOVMidHook = safetyhook::create_mid(AspectRatioFOVScanResult,
                [](SafetyHookContext& ctx) {
                    // Fix vert- FOV
                    if (fAspectRatio > fNativeAspect)
                        ctx.xmm0.f32[0] = atanf(tanf(ctx.xmm0.f32[0] * (fPi / 360)) / fNativeAspect * fAspectRatio) * (360 / fPi);
                });

            static SafetyHookMid AspectRatioMidHook{};
            AspectRatioMidHook = safetyhook::create_mid(AspectRatioFOVScanResult + 0xE,
                [](SafetyHookContext& ctx) {
                    if (fAspectRatio != fNativeAspect)
                        ctx.rax = *(uint32_t*)&fAspectRatio;
                });
        }
        else {
            spdlog::error("Aspect Ratio/FOV: Pattern scan failed.");
        }

        // Aspect ratio setting
        std::uint8_t* AspectRatioSettingScanResult = Memory::PatternScan(exeModule, "88 ?? ?? ?? ?? ?? 48 8B ?? ?? ?? ?? ?? 48 8B ?? ?? ?? ?? ?? 89 ?? ?? 48 C1 ?? ?? 89 ?? ??");
        if (AspectRatioSettingScanResult) {
            spdlog::info("Aspect Ratio Setting: Address is {:s}+{:x}", sExeName.c_str(), AspectRatioSettingScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid AspectRatioSettingMidHook{};
            AspectRatioSettingMidHook = safetyhook::create_mid(AspectRatioSettingScanResult,
                [](SafetyHookContext& ctx) {
                    ctx.rax |= 0; // Force auto
                });
        }
        else {
            spdlog::error("Aspect Ratio Setting: Pattern scan failed.");
        }
    }   
}

DWORD __stdcall Main(void*)
{
    Logging();
    Configuration();
    UpdateOffsets();
    EnableConsole();
    CurrentResolution();
    AspectRatioFOV();
    return true;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call) {
    case DLL_PROCESS_ATTACH: {
        thisModule = hModule;
        HANDLE mainHandle = CreateThread(NULL, 0, Main, 0, NULL, 0);
        if (mainHandle) {
            SetThreadPriority(mainHandle, THREAD_PRIORITY_HIGHEST);
            CloseHandle(mainHandle);
        }
        break;
    }
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}