/* Copyright 2023 Brian Low
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|  ???  |    |  ???  |------+------+------+------+------+------|
 * | LCTL |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LCTL | LALT | LGUI | MOD1 | /Space  /       \Enter \  | MOD2 | RGUI | RCTL | RALT |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[0] = LAYOUT(
    KC_ESC,        KC_1,          KC_2,          KC_3,          KC_4,          KC_5,                     /*|*/                   KC_6,          KC_7,          KC_8,          KC_9,          KC_0,          KC_MINUS,
    KC_TAB,        KC_Q,          KC_W,          KC_E,          KC_R,          KC_T,                     /*|*/                   KC_Y,          KC_U,          KC_I,          KC_O,          KC_P,          KC_BSPC,
    KC_LSFT,       KC_A,          KC_S,          KC_D,          KC_F,          KC_G,                     /*|*/                   KC_H,          KC_J,          KC_K,          KC_L,          KC_SCLN,       KC_QUOT,
    KC_LCTL,       KC_Z,          KC_X,          KC_C,          KC_V,          KC_B,        KC_COPY,     /*|*/      KC_PASTE,    KC_N,          KC_M,          KC_COMM,       KC_DOT,        KC_SLASH,      KC_RSFT,
                      KC_LCTL, KC_LALT, KC_LGUI,MO(1), KC_SPC,                                           /*|*/             KC_ENT, MO(2), KC_RGUI, KC_RCTL, KC_RALT
),
[1] = LAYOUT(
    KC_GRAVE,      KC_F1,         KC_F2,         KC_F3,         KC_F4,         KC_F5,                    /*|*/                   KC_F6,         KC_F7,         KC_F8,         KC_LBRC,       KC_RBRC,       KC_EQUAL,
    KC_TRNS,       KC_F11,        KC_F12,        KC_TRNS,       KC_TRNS,       KC_TRNS,                  /*|*/                   KC_HOME,       KC_PAGE_DOWN,  KC_PAGE_UP,    KC_END,        KC_BSLS,       KC_DELETE,
    KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,                  /*|*/                   KC_LEFT,       KC_DOWN,       KC_UP,         KC_RIGHT,      KC_TRNS,       KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,     KC_MUTE,     /*|*/      KC_PASTE,    KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_BSLS,       KC_TRNS,
                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                   /*|*/              KC_TRNS, MO(3), KC_TRNS, KC_TRNS, KC_TRNS
),
[2] = LAYOUT(
    KC_GRAVE,      KC_F1,         KC_F2,         KC_F3,         KC_F4,         KC_F5,                    /*|*/                   KC_F6,         KC_F7,         KC_F8,         KC_F9,         KC_F10,        KC_EQUAL,
    KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,                  /*|*/                   KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,                  /*|*/                   KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,     KC_TRNS,     /*|*/      KC_TRNS,     KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,
                                          KC_TRNS, KC_TRNS, KC_TRNS, MO(3), KC_TRNS,                     /*|*/                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),
[3] = LAYOUT(
    KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,                  /*|*/                   KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,                  /*|*/                   KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,                  /*|*/                   KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,     KC_TRNS,     /*|*/      KC_TRNS,     KC_TRNS,       TG(4),         KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,
                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                   /*|*/                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),
[4] = LAYOUT(
    KC_TRNS,       MS_ACL0,       MS_ACL1,       MS_ACL2,       KC_TRNS,       KC_TRNS,                  /*|*/                   KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,                  /*|*/                   KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,                  /*|*/                   MS_LEFT,       MS_DOWN,       MS_UP,         MS_RGHT,      KC_TRNS,       KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,     MS_BTN1,     /*|*/      MS_BTN2,     KC_TRNS,       TG(4),         KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,
                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MS_BTN1,                                   /*|*/                    MS_BTN2, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
)
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_LEFT, KC_RIGHT), ENCODER_CCW_CW(KC_UP, KC_DOWN) },
    [1] = { ENCODER_CCW_CW(KC_LEFT, KC_RIGHT), ENCODER_CCW_CW(MS_WHLU, MS_WHLD) },
    [2] = { ENCODER_CCW_CW(MS_WHLL, MS_WHLR),  ENCODER_CCW_CW(KC_UP, KC_DOWN) },
    [3] = { ENCODER_CCW_CW(KC_LEFT, KC_RIGHT), ENCODER_CCW_CW(KC_UP, KC_DOWN) },
    [4] = { ENCODER_CCW_CW(MS_LEFT, MS_RGHT), ENCODER_CCW_CW(MS_UP, MS_DOWN) },
};
#endif
