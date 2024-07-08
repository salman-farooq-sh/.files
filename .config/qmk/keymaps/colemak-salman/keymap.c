#include QMK_KEYBOARD_H

#define ___x___ XXXXXXX /* the NO_OP */

#define _BASE 0
#define _NUMBERS 1
#define _ARROWS 2
#define _MOUSE 3

#define MT_SFT2 MT(MOD_LSFT, KC_F14)
#define MT_LALT MT(MOD_LALT, KC_ESC)

#define LT_NUMB LT(_NUMBERS, KC_SPC)
#define MO_ARRO MO(_ARROWS)
#define LT_A LT(_MOUSE, KC_A)

#define P_TAB LCTL(KC_PGUP)
#define N_TAB LCTL(KC_PGDN)

enum custom_keycodes {
    FOO = SAFE_RANGE,
    BAR,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_ortho_4x12( \
        KC_SCLN, KC_QUOT,  KC_W  ,  KC_F  ,   KC_P ,    KC_G,      KC_J   , KC_L   ,  KC_U  ,  KC_Y  , KC_BSPC, KC_SLSH, \
        KC_TAB ,  LT_A  ,  KC_R  ,  KC_S  ,   KC_T ,    KC_D,      KC_H   , KC_N   ,  KC_E  ,  KC_I  ,  KC_O  ,  KC_ENT, \
        KC_ESC ,  KC_Z  ,  KC_X  ,  KC_C  ,   KC_V ,    KC_B,      KC_K   , KC_M   , KC_COMM, KC_DOT ,  KC_Q  , KC_BSLS, \
        KC_VOLD, KC_VOLU, MT_SFT2, KC_LCTL, KC_LGUI, MT_LALT,      LT_NUMB, MO_ARRO, KC_RSFT, KC_RCTL, KC_BRID, KC_BRIU  \
    ), 
    [_NUMBERS] = LAYOUT_ortho_4x12( \
        KC_1   ,   KC_2 ,   KC_3 ,   KC_4 ,   KC_5 ,    KC_6,      KC_7   ,   KC_8 ,   KC_9 ,  KC_0  , KC_MINS,  KC_EQL, \
        S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5), S(KC_6),      S(KC_7), S(KC_8), S(KC_9), S(KC_0), S(KC_MINS), S(KC_EQL), \
        KC_PGDN, KC_PGUP, S(KC_LBRC), S(KC_RBRC), KC_LBRC, KC_RBRC,      KC_DEL , KC_SYRQ, KC_HOME, KC_END , KC_GRV ,  KC_INS, \
        ___x___, ___x___, _______, _______, _______, _______,      _______, _______, _______, ___x___, ___x___, ___x___  \
    ),
    [_ARROWS] = LAYOUT_ortho_4x12( \
        KC_F1  ,  KC_F2 ,  KC_F3 ,  KC_F4 ,  KC_F5 ,   KC_F6,      KC_F7  ,  KC_F8 ,  KC_F9 , KC_F10 , KC_F11 ,  KC_F12, \
        ___x___, ___x___,   BAR  ,  P_TAB ,  N_TAB , ___x___,      KC_LEFT, KC_DOWN,  KC_UP , KC_RGHT, ___x___, ___x___, \
        ___x___, ___x___, KC_MPRV, KC_MPLY, KC_MNXT, ___x___,      ___x___, QK_BOOT, ___x___, ___x___, ___x___, ___x___, \
        ___x___, ___x___, _______, _______, _______, _______,      _______, _______, _______, ___x___, ___x___, ___x___  \
    ),
    [_MOUSE] = LAYOUT_ortho_4x12( \
        ___x___, ___x___, ___x___, ___x___, ___x___, ___x___,      ___x___, KC_WH_L, KC_MS_U, KC_WH_R, ___x___, ___x___, \
        ___x___,  LT_A  , KC_ACL0, KC_ACL1, KC_ACL2, ___x___,      KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_U, ___x___, \
        ___x___, ___x___, ___x___, ___x___, ___x___, ___x___,      ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, \
        ___x___, ___x___, _______, _______, _______, _______,      KC_BTN1, KC_BTN2, ___x___, ___x___, ___x___, ___x___  \
    ), 
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case FOO:
            if (record->event.pressed) {
                SEND_STRING("salman");
            }
            break;

        case BAR:
            if (record->event.pressed) {
                SEND_STRING("farooq");
            }
            break;
    }

    return true;
}
