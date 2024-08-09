#include QMK_KEYBOARD_H

#define _x_ XXXXXXX
#define ___ _______

#define LT1_B   LT(1, KC_B)
#define LT1_K   LT(1, KC_K)
#define LT2_K   LT(2, KC_Z)

#define ALT_A LALT_T(KC_A)
#define CTL_R LCTL_T(KC_R)
#define SFT_S LSFT_T(KC_S)
#define GUI_t LGUI_T(KC_T)

#define GUI_N RGUI_T(KC_N)
#define SFT_E RSFT_T(KC_E)
#define CTL_I RCTL_T(KC_I)
#define ALT_O RALT_T(KC_O)

#define P_TAB LCTL(KC_PGUP)
#define N_TAB LCTL(KC_PGDN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_ortho_4x12( \
    KC_1     , KC_2     , KC_3     , KC_4     , KC_5     , KC_6     , KC_7     , KC_8     , KC_9     , KC_0     , KC_MINS  , KC_EQL   , \
    KC_MUTE  , KC_Q     , KC_W     , KC_F     , KC_P     , KC_G     , KC_J     , KC_L     , KC_U     , KC_Y     , KC_LBRC  , KC_RBRC  , \
    KC_ESC   , ALT_A    , CTL_R    , SFT_S    , GUI_t    , KC_D     , KC_H     , GUI_N    , SFT_E    , CTL_I    , ALT_O    , KC_BSPC  , \
    KC_QUOT  , LT2_Z    , KC_X     , KC_C     , KC_V     , LT1_B    , LT1_K    , KC_M     , KC_COMM  , KC_DOT   , KC_SLSH  , KC_SCLN    \
), 
[1] = LAYOUT_ortho_4x12( \
    KC_F1    , KC_F2    , KC_F3    , KC_F4    , KC_F5    , KC_F6    , KC_F7    , KC_F8    , KC_F9    , KC_F10   , KC_F11   , KC_F12   , \
    ___      , KC_GRV   , KC_VOLD  , KC_VOLU  , KC_BRID  , KC_BRIU  , KC_F14   , P_TAB    , N_TAB    , KC_WFAV  , ___      , ___      , \
    ___      , ___      , ___      , ___      , ___      , KC_TAB   , KC_LEFT  , KC_DOWN  , KC_UP    , KC_RGHT  , KC_ENT   , ___      , \
    QK_BOOT  , KC_F15   , KC_F17   , KC_F16   , KC_F13   , KC_ESC   , KC_DEL   , KC_PSCR  , KC_HOME  , KC_END   , KC_BSLS  , QK_BOOT    \
),
[2] = LAYOUT_ortho_4x12( \
    _x_      , QK_BOOT  , _x_      , _x_      , _x_      , _x_      , _x_      , _x_      , _x_      , _x_      , _x_      , _x_      , \
    _x_      , _x_      , _x_      , _x_      , _x_      , _x_      , KC_WH_L  , KC_WH_D  , KC_WH_U  , KC_WH_R  , _x_      , _x_      , \
    ___      , _x_      , KC_ACL0  , KC_ACL1  , KC_ACL2  , _x_      , KC_MS_L  , KC_MS_D  , KC_MS_U  , KC_MS_R  , _x_      , _x_      , \
    _x_      , _x_      , _x_      , _x_      , _x_      , _x_      , KC_BTN1  , KC_BTN2  , KC_BTN3  , _x_      , _x_      , _x_        \
),
};

const uint16_t PROGMEM bk[] = {LT1_B, LT1_K, COMBO_END};
combo_t key_combos[] = {
    COMBO(bk, KC_SPC),
};

// KC_EXLM  , KC_AT    , KC_HASH  , KC_DLR   , KC_PERC  , KC_CIRC  , KC_AMPR  , KC_ASTR  , KC_LPRN  , KC_RPRN  , KC_UNDS  , KC_PLUS  ,
