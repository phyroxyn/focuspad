# focuspad_v2

A compact 4×4 macropad for Windows productivity workflows (Fusion 360, Bambu Studio, Adobe Illustrator/Photoshop, DaVinci Resolve). It features two knobs: the **left knob is a push-button only** (purely for aesthetics), while the **right knob is a real rotary encoder** for volume control.

## Render
![focuspad_v2 render](https://github.com/phyroxyn/focuspad/blob/e32d70f9403c526be76d4f2ef78d0408b3021f45/Assets/Focuspad_render.PNG)
![focuspad_v2 side view](https://github.com/phyroxyn/focuspad/blob/c3db5a3a73ed4c919b3456386d061fa25b3f05f7/Assets/Makropad_v1_2025-Dec-28_03-27-13PM-000_CustomizedView38785409704%20(1).png)
## PCB
### Schematic
![Schematic](https://github.com/phyroxyn/focuspad/blob/c3db5a3a73ed4c919b3456386d061fa25b3f05f7/Assets/Schematic.png)

### PCB Layout
![PCB](https://github.com/phyroxyn/focuspad/blob/c3db5a3a73ed4c919b3456386d061fa25b3f05f7/Assets/PCB.png)

## Case
The enclosure is designed as **five parts**:
- **Top cover** (protects the PCB; acrylic would look great).
- **Base** (with heat-set insert holes to mount the PCB and top cover).
- **Side cover** (hides the PCB ; would look great in milled aluminum).
- **Sub-base / stand** (tilts the macropad at an ergonomic angle).
- **Connector** (connects the base with the stand).

## Firmware
Firmware is written in QMK.
- Left knob: **push-button only** → Mute/Unmute.
- Right knob: **rotary encoder** → Volume Up/Down.
- The 12 keys are mapped to common Windows shortcuts.

QMK setup help:
- https://docs.qmk.fm/#/getting_started_build_tools 
- https://docs.qmk.fm/#/getting_started_make_guide 
- https://youtu.be/BcXycScePHM?t=360&si=u64MpJI-V58_fIYx

## Bill of Materials (BOM)
| Item | Qty | Notes / Part |
|------|-----|--------------|
| Seeed Studio XIAO RP2040 (through-hole) | 1 | Main MCU |
| MX-style switches | 12 | 4×4 grid, corners missing |
| Keycaps | 12 | **low profile**, black  |
| Rotary encoder (EC11)(w. **push putton**) | 2 | Right&left knob (rotary) |
| Diodes (1N4148, through-hole) | 13 | For matrix and left encoder|
| Rotary encoder caps|2|Cool locking and **black**|
|(3D printed parts) | 5|Black Petg/ aluminium & Plexiglas|
| M3 heat-set inserts (M3×5×4) | 4 | Case mounting |
| M3 screws | 4 | Case mounting |


