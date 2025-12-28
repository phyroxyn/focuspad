// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

enum custom_keycodes {
    CA_HELD = SAFE_RANGE,  
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case CA_HELD:
            if (record->event.pressed) {
                register_mods(MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT));
            } else {
                unregister_mods(MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT));
            }
            return false;
    }
    return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        
        KC_MUTE,  KC_MUTE,  CA_HELD,  KC_MEDIA_PLAY_PAUSE,
        KC_E,     KC_Q,     KC_F,     KC_M,
        KC_S,     KC_L,     KC_R,     KC_C,
        KC_Z,     KC_Y,     KC_X,     KC_B
    )
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { 
        tap_code(clockwise ? KC_VOLU : KC_VOLD);
    }
    return false;
}
