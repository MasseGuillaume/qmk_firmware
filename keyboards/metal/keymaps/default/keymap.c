#include QMK_KEYBOARD_H

enum layers
{
    _ALPHA = 0,
    _NAV = 1,
    _SYMBOLS = 2,
    _SPACES = 3,
    _NUMPAD = 4
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_ALPHA] = LAYOUT(
        KC_NO,        KC_NO,        KC_ESC,       KC_P,         KC_Y,      KC_F,    KC_G,          KC_C,          KC_R,            KC_L,
        LCTL_T(KC_A), LALT_T(KC_O), LGUI_T(KC_E), LSFT_T(KC_U), KC_I,      KC_D,    RSFT_T(KC_H),  RGUI_T(KC_T),  RALT_T(KC_N),    RCTL_T(KC_S),
        KC_TAB,       KC_Q,    KC_J,      KC_K,   KC_X,                    KC_B,    KC_M,          KC_W,          KC_V,            KC_Z,

                               KC_DELETE, KC_BSPC, MO(4),                   LT(1, KC_ENTER), LT(2, KC_SPACE), MO(3)
    ),
    [_NAV] = LAYOUT(
      KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R, KC_BTN2,      KC_BTN1, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
      KC_HOME, KC_PGUP, KC_PGDN, KC_END, KC_LALT,     KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT,
      KC_NO, KC_LSCR, KC_PAUSE, KC_NO, KC_NO,     KC_MRWD, KC_MPLY, KC_VOLD, KC_VOLU, KC_MFFD,
      KC_TRNS, KC_LSFT, KC_TRNS,                          KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [_SYMBOLS] = LAYOUT(
      KC_SCLN, LSFT(KC_5), LSFT(KC_8), LSFT(KC_2), KC_MINUS,                  KC_SLASH, LSFT(KC_LBRC), KC_QUOTE, KC_GRAVE, LSFT(KC_RBRC),
      LSFT(KC_3), LSFT(KC_1), KC_COMMA, KC_DOT, KC_EQUAL,                       LSFT(KC_BSLS), LSFT(KC_9), LSFT(KC_QUOTE), LSFT(KC_SCLN), LSFT(KC_0),
      LSFT(KC_BSLS), LSFT(KC_5), LSFT(KC_7), LSFT(KC_6), LSFT(KC_MINUS),      KC_BSLS, KC_LBRC, LSFT(KC_4), LSFT(KC_SLASH), KC_RBRC,
      KC_TRNS, KC_LSFT, KC_TRNS,                                                  KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [_SPACES] = LAYOUT(
        KC_F2, KC_F12, KC_F3, LCTL(KC_0), KC_PSCR,                           LGUI(KC_EQUAL), LGUI(KC_SPACE), LALT(KC_C), LALT(KC_R), KC_NO,
        LALT(KC_1), LALT(KC_2), LALT(KC_3), LALT(KC_4), LALT(KC_5),             LGUI(KC_0), LALT(KC_H), LALT(KC_T), LALT(KC_N), LALT(KC_S),
        KC_F10, KC_F11, KC_F5, LALT(KC_7), LALT(KC_8),                          LGUI(KC_MINUS), LALT(KC_SPACE), KC_NO, KC_NO, KC_NO,
        KC_TRNS, KC_LSFT, KC_TRNS,                                                KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [_SPACES] = LAYOUT(
        KC_NO, KC_NO, KC_ESCAPE, KC_NO, KC_NO,        KC_NO, KC_NO, KC_ESCAPE, KC_NO, KC_NO,
        KC_7, KC_5, KC_3, KC_1, KC_9,                 KC_8, KC_0, KC_2, KC_4, KC_6,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_TRNS, KC_TRNS
    )
};


