# STALKER 2 Tweak
[![Patreon-Button](https://raw.githubusercontent.com/Lyall/STALKER2Tweak/refs/heads/master/.github/Patreon-Button.png)](https://www.patreon.com/Wintermance) [![ko-fi](https://ko-fi.com/img/githubbutton_sm.svg)](https://ko-fi.com/W7W01UAI9)<br />
[![Github All Releases](https://img.shields.io/github/downloads/Lyall/STALKER2Tweak/total.svg)](https://github.com/Lyall/STALKER2Tweak/releases)

This is an ASI plugin for for STALKER 2: Heart of Chronobyl that fixes ultrawide issues, enables the console and more.

## Features
### General
- Enable developer console.

### Ultrawide/Narrower
- Disable pillarboxing/letterboxing in cutscenes.
- Fix vert- FOV when playing on an ultrawide display.

## Installation
- Grab the latest release of STALKER2Tweak from [here.](https://github.com/Lyall/STALKER2Tweak/releases)
- Extract the contents of the release zip in to the the game folder. <br />
(e.g. "**steamapps\common\S.T.A.L.K.E.R. 2 Heart of Chornobyl**" for Steam).

### Steam Deck/Linux Additional Instructions
🚩**You do not need to do this if you are using Windows!**
- Open up the game properties in Steam and add `WINEDLLOVERRIDES="dsound=n,b" %command%` to the launch options.

## Configuration
- See **STALKER2Tweak.ini** to adjust settings.

## Screenshots

|  |
|:--------------------------:|
| Cutscene |

## Known Issues
Please report any issues you see.

- After the intro cutscene, the character viewmodel may appear vert-. This is a known game issue - open the display options, adjust the fov slider and apply to fix.

## Credits
[Ultimate ASI Loader](https://github.com/ThirteenAG/Ultimate-ASI-Loader) for ASI loading. <br />
[inipp](https://github.com/mcmtroffaes/inipp) for ini reading. <br />
[spdlog](https://github.com/gabime/spdlog) for logging. <br />
[safetyhook](https://github.com/cursey/safetyhook) for hooking.<br />
[Dumper-7](https://github.com/Encryqed/Dumper-7) for dumping the SDK.