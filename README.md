![Header](header.png)

<div align="center">

# MomDR2024

**Birthday quest game running on ESP8266**

[![License](https://img.shields.io/badge/license-MIT-2C2C2C?style=for-the-badge&labelColor=1E1E1E)](LICENSE)
[![ESP8266](https://img.shields.io/badge/ESP8266-NodeMCU-2C2C2C?style=for-the-badge&logo=espressif&labelColor=1E1E1E)]()

</div>

A birthday scavenger hunt game hosted on an ESP8266 access point. Players connect to the WiFi network, enter numeric codes (printed inside dart balloons) in the browser, and follow riddle-based routes through physical locations around a house and garden. Each route chain ends with a hidden gift.

## ■ Features

- ❖ **Self-hosted AP** — ESP8266 creates its own WiFi network (`HappyBirsday`), no internet or router required
- ❖ **16 locations** — 11 prize routes, 4 trap-locations and a rest stop, all served from flash
- ❖ **Code-based navigation** — each step is a unique 5-digit code; entering it redirects to the next riddle
- ❖ **Riddle hints** — cryptic clues (in Russian) pointing to physical objects at real-world spots
- ❖ **Trap-locations** — collect-all puzzles (7 spinners, 20 greenhouse pieces, 4 hoses, a secret task) that slow the player down via in-RAM progress counters
- ❖ **Gift reveals** — each completed route ends with a present description
- ❖ **Catppuccin-styled UI** — inline HTML with an animated 11-stop gradient background and glassmorphism login card

## ■ Stack

| Component | Technology |
|-----------|------------|
| MCU | ESP8266 (NodeMCU 1.0) |
| Framework | Arduino |
| Web server | ESP8266WebServer (port 80) |
| WiFi | SoftAP mode (`WiFi.softAP`, standalone) |
| UI | Inline HTML/CSS served from sketch (Catppuccin palette, animated gradient, glassmorphism) |
| Client logic | Per-code JS generated on the fly at `/js?cd=<code>` for input validation + redirect |

## ■ Quest Locations

Routes 01–11 are prize chains; 12–15 are trap-locations; 16 is a rest stop. Steps below count the screens in each chain.

| Route | Area | Steps | Prize / Goal |
|-------|------|-------|--------------|
| 01 | Second floor | 8 | Lamp |
| 02 | First floor | 15 | Batteries |
| 03 | Old kitchen | 8 | Book |
| 04 | Old garden | 10 | Wire |
| 05 | New garden | 8 | Book |
| 06 | Bathhouse | 11 | Power supply |
| 07 | Shower | 10 | Book (Marinina) |
| 08 | Shed | 8 | Task: walk the small loop |
| 09 | Greenhouse | 5 | Cola |
| 10 | Car | 10 | Whiskey |
| 11 | New kitchen | 8 | — |
| 12 | Spinners (trap) | collect 7 | unlock next |
| 13 | Old greenhouse (trap) | collect 20 | unlock next |
| 14 | Hoses (trap) | collect 4 | unlock next |
| 15 | Don't cut the pipe (trap) | secret task | unlock next |
| 16 | Rest | 1 | take a break |

## ■ Usage

```bash
# Open Arduino IDE
# Select board: NodeMCU 1.0 (ESP-12E Module)
# Open MomDR2024.ino (routes.ino and resourses.ino compile alongside it)
# Upload
```

1. Power on the ESP8266
2. Connect a phone to WiFi `HappyBirsday` (password: see `config.h`)
3. Open `http://192.168.4.1/`
4. Follow the riddles and enter codes from the dart balloons

## ■ Files

- `MomDR2024.ino` — main firmware: starts the SoftAP and the web server
- `routes.ino` — registers all `/<code>` handlers, location names, riddle text and gifts
- `resourses.ino` — page builders and the inline CSS/JS templates (Catppuccin theme)

## ■ License

MIT © [pluttan](https://github.com/pluttan)
