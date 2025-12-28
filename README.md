# focuspad_v2

A compact 4x4 macropad designed for Windows productivity workflows (Fusion 360, Bambu Studio, Adobe Illustrator/Photoshop, DaVinci Resolve) with a two rotary encoder (one works as a button, only there for aestetic reasons ;).

## Renders

## PCB
### Schematic

### PCB Layout

## Case
This case is 3D printed and designed to fit the PCB and a Seeed Studio XIAO RP2040 (through-hole).  


## Firmware
Firmware is written in QMK. 


## Build & Flash (QMK)
Build:
    make focuspad_v2:default

Flash:
    make focuspad_v2:default:flash

QMK setup help:
- https://docs.qmk.fm/#/getting_started_build_tools
- https://docs.qmk.fm/#/getting_started_make_guide



## Bill of Materials (BOM)
| Item | Qty | Notes / Part |
|------|-----|--------------|
| Seeed Studio XIAO RP2040 (through-hole) | 1 | Main MCU |
| MX-style switches | 16 | 4x4 grid |
| Keycaps | 16 | MX compatible |
| Rotary encoder (EC11) | 2 | Right&Left-side encoder |
| Diodes (1N4148, through-hole) | 16 | Switch matrix |
| M3 heat-set inserts (M3x5x4) | 4 | Case mounting |
| M3 screws | 4 | Case mounting |


