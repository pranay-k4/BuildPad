// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_keycodes{
    SPOTIFY = SAFE_RANGE
};

enum layers {
    _MEDIA,
    _TOOLS
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    [_MEDIA] = LAYOUT_ortho_2x3(
        KC_MPRV, KC_MPLY, KC_MNXT,
        SPOTIFY, KC_LALT, KC_DEL
    ),

    [_TOOLS] = LAYOUT_ortho_2x3(
       KC_UNDO, KC_COPY, KC_PASTE,
       UG_TOGG, UG_NEXT, UG_VALU
    )
};

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0 ){
    if (clockwise) {
        tap_code(KC_VOLU);
    }
    else {
        tap_code(KC_VOLD);
    }
  }
  return false;
}

#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!record->event.pressed) {
        return true;
    }

    switch (keycode) {
        case SPOTIFY:
             tap_code16(LGUI(KC_9));
             return false;
    }

    return true;

}
