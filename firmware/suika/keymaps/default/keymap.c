#include QMK_KEYBOARD_H
#include <stdio.h>
#include <string.h>

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_NO,     KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,         KC_8,     KC_9,    KC_0,      KC_DELETE,
    KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,         KC_I,     KC_O,    KC_P,      KC_BSPC,
    KC_TAB ,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,         KC_K,     KC_L,    KC_SCLN,   KC_MINS,
    KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,         KC_COMM,  KC_DOT,  KC_UP,     KC_SLSH,
    KC_LCTL,   KC_LGUI, KC_LALT, KC_NO,   MO(1),   KC_SPC,  KC_ENT,  RALT(KC_GRV), KC_NO,    KC_LEFT, KC_DOWN,   KC_RIGHT
  ),

  [1] = LAYOUT(
    KC_NO,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,   KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_NO,
    KC_NO,   KC_F11,   KC_F12,   KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_QUOT,  KC_EQL,
    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_LBRC,  KC_RBRC,  KC_NO,    KC_BSLS,
    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_LSFT, KC_RSFT,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO
  ),

  [2] = LAYOUT(
    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO
    ),

  [3] = LAYOUT(
    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO
    )

};

bool encoder_update_user(uint8_t index, bool clockwise) {
        if (clockwise) {
            tap_code_delay(KC_VOLU, 30);
        } else {
            tap_code_delay(KC_VOLD, 30);
        }
    return false;
}
