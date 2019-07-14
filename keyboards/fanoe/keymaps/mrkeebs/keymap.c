#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_split(
      KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSLS, KC_GRV,  KC_HOME,    \
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_BSPC, KC_PGUP,  \
      KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,  KC_ENT,   KC_PGDN,    \
      KC_LSFT,          KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, KC_UP,   LT(1, KC_END),      \
      KC_LCTL, KC_LGUI, KC_LALT,                       KC_SPC,                KC_RALT, KC_LEFT,  KC_DOWN, KC_RIGHT),

  [1] = LAYOUT_split(
      _______, _______, _______,    _______,    _______,   _______,   _______,   _______,   _______,   _______,    _______,    _______,  _______,  _______, _______,  _______,    \
      _______, _______, _______,    _______,    _______,   _______,   _______,   _______,   _______,   _______,    _______,    _______,  _______, RESET, _______,  \
      _______, KC_MUTE, KC_VOLU,    KC_VOLD,    KC_MPLY,   KC_MPRV,   KC_MNXT,   _______,   _______,   _______,    _______, _______,  _______,   _______,    \
      _______,          _______,    _______,    _______,   _______,   _______,   _______,   _______,   _______, _______,  _______,  _______, _______,   _______,      \
      _______, _______, _______,                       _______,                _______, _______,  _______, _______),
};