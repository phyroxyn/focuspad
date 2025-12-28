# focuspad_v2

![focuspad_v2](https://imgur.com/REPLACE_ME)

A compact 4x4 macropad for productivity shortcuts, with a rotary encoder.

- Keyboard Maintainer: [phineas](https://github.com/phyroxyn)
- Hardware Supported: Custom Focuspad_v2 PCB, Seeed Studio XIAO RP2040 (Pro Micro compatible footprint)
- Hardware Availability: Private build / custom PCB (add a link if you publish it)

## Building and flashing

Build firmware (after setting up your build environment):

    make focuspad_v2:default

Flash firmware:

    make focuspad_v2:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the
[make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information.  
Brand new to QMK? Start with the [Complete Newbs Guide](https://docs.qmk.fm/#/newbs). [web:1679][web:1456]

## Bootloader

Enter the bootloader in 3 ways: [web:1678]

- **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top-left key) and plug in the keyboard. [web:1678]
- **Physical reset button**: Briefly press the reset button on the controller/PCB (or short the reset pads, if present). [web:1678]
- **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available. [web:1678]
