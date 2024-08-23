#include QMK_KEYBOARD_H

enum layers
{
    _ALPHA = 0
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_ALPHA] = LAYOUT(
        KC_1,         KC_2,    KC_ESC,    KC_P,    KC_Y,              KC_F,    KC_G,    KC_C,    KC_R,    KC_L,
        KC_A,         KC_O,    KC_E,      KC_U,    KC_I,              KC_D,    KC_H,    KC_T,    KC_N,    KC_S,
        KC_TAB,       KC_Q,    KC_J,      KC_K,    KC_X,              KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,
                               KC_DELETE, KC_BSPC, KC_4,              KC_ENTER, KC_SPACE, KC_5
    ),
};


