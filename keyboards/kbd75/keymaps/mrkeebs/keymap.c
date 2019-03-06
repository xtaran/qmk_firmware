#include "kbd75.h"

#define MODS_CTRL_MASK  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))

#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	LAYOUT(
		LT(2, KC_ESC),  KC_F1,   KC_F2,   KC_F3,  KC_F4,  KC_F5,  KC_F6, KC_MRWD, KC_MPLY, KC_MFFD, KC_MUTE, KC_VOLD, KC_VOLU, KC_PSCR, KC_LSCR, KC_DEL,
		KC_GRV,         KC_1,    KC_2,    KC_3,   KC_4,   KC_5,   KC_6,  KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_DEL, KC_BSPC,  KC_HOME,
		KC_TAB,         KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,   KC_Y,  KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_PGUP,
		KC_LCTRL,       KC_A,    KC_S,    KC_D,   KC_F,   KC_G,   KC_H,  KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,                    KC_PGDN,
		KC_LSFT, MO(1), KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,  KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,            MO(1),
		KC_LCTL,        KC_LGUI, KC_LALT,             KC_SPC, KC_SPC, KC_SPC,              KC_RALT, MO(1),   KC_RCTL, KC_LEFT, KC_DOWN,          KC_RGHT),

	LAYOUT(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET, _______,
		_______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______, _______, _______, _______,
		_______, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, KC_PSCR, KC_LSCR, BL_DEC, BL_TOGG, BL_INC, BL_STEP, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______)

};