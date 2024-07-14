#include QMK_KEYBOARD_H

#define _x_ XXXXXXX
#define ___ XXXXXXX

#define _BASE  0
#define _LOWER 1
#define _UPPER 2
#define _MOUSE 3

#define LT_LOWER LT(_LOWER, KC_SPC)
#define MO_UPPER MO(_UPPER)
#define MO_MOUSE MO(_MOUSE)

#define P_TAB LCTL(KC_PGUP)
#define N_TAB LCTL(KC_PGDN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_ortho_4x12( \
        KC_TAB   , KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     ,      KC_Y     , KC_U     , KC_I     , KC_O     , KC_P     , KC_BSPC  , \
        KC_ESC   , KC_A     , KC_S     , KC_D     , KC_F     , KC_G     ,      KC_H     , KC_J     , KC_K     , KC_L     , KC_SCLN  , KC_ENT   , \
        MO_MOUSE , KC_Z     , KC_X     , KC_C     , KC_V     , KC_B     ,      KC_N     , KC_M     , KC_COMM  , KC_DOT   , KC_SLSH  , KC_QUOT  , \
        KC_LSFT  , KC_VOLD  , KC_MUTE  , KC_VOLU  , KC_LGUI  , KC_LALT  ,      LT_LOWER , MO_UPPER , KC_MPRV  , KC_MPLY  , KC_MNXT  , KC_LCTL    \
    ), 
    [_LOWER] = LAYOUT_ortho_4x12( \
        KC_1     , KC_2     , KC_3     , KC_4     , KC_5     , KC_6     ,      KC_7     , KC_8     , KC_9     , KC_0     , KC_MINS  , KC_EQL   , \
        KC_F1    , KC_F2    , KC_F3    , KC_F4    , KC_F5    , KC_F6    ,      KC_F7    , KC_F8    , KC_F9    , KC_F10   , KC_F11   , KC_F12   , \
        _x_      , _x_      , _x_      , _x_      , _x_      , _x_      ,      _x_      , _x_      , _x_      , _x_      , _x_      , _x_      , \
        ___      , _x_      , _x_      , _x_      , ___      , ___      ,      ___      , ___      , _x_      , _x_      , _x_      , ___        \
    ),
    [_UPPER] = LAYOUT_ortho_4x12( \
        KC_GRV   , _x_      , _x_      , KC_BRID  , KC_BRIU  , _x_      ,      KC_F14   , P_TAB    , N_TAB    , _x_      , KC_SYRQ  , _x_      , \
        _x_      , _x_      , _x_      , _x_      , KC_F15   , _x_      ,      KC_LEFT  , KC_DOWN  , KC_UP    , KC_RGHT  , _x_      , _x_      , \
        _x_      , _x_      , KC_F17   , KC_F16   , KC_F13   , _x_      ,      KC_DEL   , _x_      , KC_HOME  , KC_END   , _x_      , _x_      , \
        ___      , _x_      , _x_      , _x_      , ___      , ___      ,      ___      , ___      , QK_BOOT  , _x_      , _x_      , ___        \
    ), 
    [_MOUSE] = LAYOUT_ortho_4x12( \
        _x_      , _x_      , _x_      , _x_      , _x_      , _x_      ,      KC_WH_L  , KC_WH_D  , KC_WH_U  , KC_WH_R  , _x_      , _x_      , \
        _x_      , _x_      , KC_ACL0  , KC_ACL1  , KC_ACL2  , _x_      ,      KC_MS_L  , KC_MS_D  , KC_MS_U  , KC_MS_R  , _x_      , _x_      , \
        _x_      , QK_BOOT  , _x_      , _x_      , _x_      , _x_      ,      _x_      , _x_      , _x_      , _x_      , _x_      , _x_      , \
        ___      , _x_      , _x_      , _x_      , ___      , ___      ,      KC_BTN1  , KC_BTN2  , KC_BTN3  , _x_      , _x_      , ___        \
    ), 
};