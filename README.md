# focuspad_v2

A compact 4x4 macropad designed for Windows productivity workflows (Fusion 360, Bambu Studio, Adobe Illustrator/Photoshop, DaVinci Resolve) with a two rotary encoder (one works as a button, only there for aestetic reasons ;).

## Render
![image alt](https://github.com/phyroxyn/focuspad/blob/e32d70f9403c526be76d4f2ef78d0408b3021f45/Assets/Focuspad_render.PNG) 
![image alt](https://github.com/phyroxyn/focuspad/blob/c3db5a3a73ed4c919b3456386d061fa25b3f05f7/Assets/Makropad_v1_2025-Dec-28_03-27-13PM-000_CustomizedView38785409704%20(1).png)

## PCB
### Schematic
![image alt](https://github.com/phyroxyn/focuspad/blob/c3db5a3a73ed4c919b3456386d061fa25b3f05f7/Assets/Schematic.png)
### PCB Layout
![image alt](https://github.com/phyroxyn/focuspad/blob/c3db5a3a73ed4c919b3456386d061fa25b3f05f7/Assets/PCB.png)
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
| Keycaps | 12 | MX compatible |
| Rotary encoder (EC11) | 2 | Right&Left-side encoder |
| Diodes (1N4148, through-hole) | 12 | Switch matrix |
| M3 heat-set inserts (M3x5x4) | 4 | Case mounting |
| M3 screws | 4 | Case mounting |


