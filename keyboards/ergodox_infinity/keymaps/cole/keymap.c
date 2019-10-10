#include QMK_KEYBOARD_H

//#include "ergodox.h"
#include "debug.h"
#include "action_layer.h"
#include "version.h"

#include "cole.h"

// enum custom_keycodes {
//   PLACEHOLDER = SAFE_RANGE, // can always be here
//   EPRM,
//   VRSN,
//   RGB_SLDS
// };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,---------------------------------------------------.           ,--------------------------------------------------.
 * |   =     |   1  |   2  |   3  |   4  |   5  |  6   |           | FN0  |   6  |   7  |   8  |   9  |   0  |   -    |
 * |---------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |   Tab   |   Q  |   W  |   E  |   R  |   T  |  L1  |           |  L1  |   Y  |   U  |   I  |   O  |   P  |   \    |
 * |---------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | Ctl/Esc |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |; / L2|' / Cmd |
 * |---------+------+------+------+------+------| Hyper|           | Meh  |------+------+------+------+------+--------|
 * | LShift  |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |//Ctrl| RShift |
 * `---------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |Grv/L1 | Grv  |AltShf| Left | Right|                                       |  Up  | Down |   [  |   ]  | ~L1  |
 *   `-----------------------------------'                                       `----------------------------------'
 *                                     ,----------------.          ,-------------------.
 *                                     | Ctrl |   Alt   |          |   Alt    |  Ctrl  |
 *                              ,------|------|---------|          |----------+--------+------.
 *                              |      |      |   Home  |          |   PgUp   |        |      |
 *                              | Bksp |  Del |---------|          |----------| Enter  |  Spc |
 *                              |      |      | End/Gui |          | PgDn/Gui |        |      |
 *                              `-----------------------'          `--------------------------'
 */

  [QWERTY] = LAYOUT_ergodox(
        // left hand
        KC_EQL,         KC_1,        KC_2,          KC_3,    KC_4,    KC_5, KC_6,
        KC_TAB,         KC_Q,        KC_W,          KC_E,    KC_R,    KC_T, TT(FNKEYS),
        CTL_T(KC_ESC),  KC_A,        KC_S,          KC_D,    KC_F,    KC_G,
        KC_LSFT,        KC_Z,        KC_X,          KC_C,    KC_V,    KC_B, TO(COLMACK),
        KC_LCTL,        KC_GRV,      LALT(KC_LSFT), KC_LEFT, KC_RGHT,
        KC_LCTL,        KC_LALT,
        KC_HOME,
        KC_SPC,         KC_BSPC,      GUI_T(KC_END),

        // right hand
        KC_NO,          KC_6,          KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
        TG(ARROW),      KC_Y,          KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_H,           KC_J,          KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        TG(COLMACK),    KC_N,          KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_UP,          KC_DOWN,       KC_LBRC, KC_RBRC, TT(FNKEYS),
        KC_RALT,        KC_RCTL,
        KC_PGUP,
        GUI_T(KC_PGDN), KC_ENT,        KC_SPC
  ),

  [COLMACK] = LAYOUT_ergodox(
        // left hand
        KC_EQL,        KC_1,        KC_2,          KC_3,    KC_4,    KC_5, KC_6,
        KC_TAB,        KC_Q,        KC_W,          KC_F,    KC_P,    KC_G, TT(FNKEYS),
        CTL_T(KC_ESC), KC_A,        KC_R,          KC_S,    KC_T,    KC_D,
        KC_LSFT,       KC_Z,        KC_X,          KC_C,    KC_V,    KC_B, TO(QWERTY),
        KC_LCTL,       KC_GRV,      LALT(KC_LSFT), KC_LEFT, KC_RGHT,
        KC_LCTL,       KC_LALT,
        KC_HOME,
        KC_SPC,        KC_BSPC,      GUI_T(KC_END),

        // right hand
        KC_NO,          KC_6,          KC_7,    KC_8,    KC_9,   KC_0,    KC_MINS,
        TG(ARROW),      KC_J,          KC_L,    KC_U,    KC_Y,   KC_SCLN, KC_BSLS,
        KC_H,           KC_N,          KC_E,    KC_I,    KC_O,   KC_QUOT,
        TG(COLMACK),    KC_K,          KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
        KC_UP,          KC_DOWN,       KC_LBRC, KC_RBRC, TT(FNKEYS),
        KC_RALT,        KC_RCTL,
        KC_PGUP,
        GUI_T(KC_PGDN), KC_ENT,        KC_SPC
  ),

  [ARROW] = LAYOUT_ergodox(
        // left hand
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,
        KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,

        // right hand
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_UP,   KC_TRNS, KC_TRNS, KC_TRNS,
        KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,
        KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [GAME] = LAYOUT_ergodox(
        // left hand
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_ESC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,
        KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,

        // right hand
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,
        KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [FNKEYS] = LAYOUT_ergodox(
        // left hand
        KC_TRNS, KC_FN1,  KC_FN2,  KC_FN3,  KC_FN4,  KC_FN5,  KC_FN6,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,
        KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,

        // right hand
        KC_TRNS, KC_FN6,  KC_FN7,  KC_FN8,  KC_FN9,  KC_FN10, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,
        KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS
    ),
};


const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_TAP_TOGGLE(FNKEYS),
    [2] = ACTION_LAYER_TAP_TOGGLE(ARROW),
    [3] = ACTION_LAYER_TAP_TOGGLE(GAME)
};
