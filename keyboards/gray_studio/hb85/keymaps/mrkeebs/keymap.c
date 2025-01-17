/*
Copyright 2019 MechMerlin <mechmerlin@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_stt(
        KC_ESC,  KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  MO(1),                              \
        KC_GRV,  KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_PSLS, KC_PAST, TG(2), \
        KC_TAB,  KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_P7,   KC_P8,   KC_P9,   \
        KC_LCTL, KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,    KC_L,   KC_SCLN, KC_QUOT,          KC_ENT,  KC_P4,   KC_P5,   KC_P6,   \
        KC_LSFT, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM, KC_DOT, KC_SLSH,          KC_RSFT, KC_UP,   KC_P1,   KC_P2,   KC_P3,   \
        KC_LALT, KC_LGUI,                                  KC_SPC,                          KC_RGUI, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT, KC_P0    \
    ),

    [1] = LAYOUT_stt(
        RESET,   RGB_M_P,  RGB_M_B,  RGB_M_R,  RGB_M_SW, RGB_M_SN, RGB_M_K,  RGB_M_X,  RGB_M_G,  _______,  _______,  _______, _______, _______,                            \
        EEP_RST, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______, _______, _______, _______, _______, \
        _______, KC_MUTE,  KC_VOLU,  KC_VOLD,  RGB_TOG,  RGB_MOD,  RGB_HUI,  RGB_SAI,  RGB_VAI,  RGB_SPI,  _______,  _______, _______, _______, KC_HOME, KC_UP  , KC_PGUP, \
        _______, _______,  _______,  _______,  _______,  RGB_RMOD, RGB_HUD,  RGB_SAD,  RGB_VAD,  RGB_SPD,            _______, _______, _______, KC_LEFT, _______, KC_RGHT,          \
        _______, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______, _______, _______, KC_END , KC_DOWN, KC_PGDN,          \
        _______, _______,                                _______,                                                   _______,  _______, _______, _______, _______, _______                                                                             \
    ),

    [2] = LAYOUT_stt(
        _______, _______,  _______,  _______,  _______, _______, _______,  _______,  _______,  _______,  _______,  _______, _______, _______,                            \
        _______, _______,  _______,  _______,  _______, _______, _______,  _______,  _______,  _______,  _______,  _______, _______, _______, KC_DEL , KC_INS , _______, \
        _______, _______,  _______,  _______,  _______, _______, _______,  _______,  _______,  _______,  _______,  _______, _______, _______, KC_HOME, KC_UP  , KC_PGUP, \
        _______, _______,  _______,  _______,  _______, _______, _______,  _______,  _______,  _______,            _______, _______, _______, KC_LEFT, _______, KC_RGHT,          \
        _______, _______,  _______,  _______,  _______, _______, _______,  _______,  _______,            _______,  _______, _______, _______, KC_END , KC_DOWN, KC_PGDN,          \
        _______, _______,                               _______,                                                   _______,  _______, _______, _______, _______, _______                                                                             \
    ),
};
