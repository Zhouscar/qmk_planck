#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"

enum planck_layers {
    _COLEMAK_DHM = 0,
    _GRAPHITE = 1,
    _NAV = 2,
    _SYM = 3,
    _SYM2 = 4,
    _FUN = 5,
    _GAME = 6,
    _GAME2 = 7,
};

#define CO_A LCTL_T(KC_A)
#define CO_R LSFT_T(KC_R)
#define CO_S LGUI_T(KC_S)
#define CO_T LALT_T(KC_T)
#define CO_N RALT_T(KC_N)
#define CO_E RGUI_T(KC_E)
#define CO_I RSFT_T(KC_I)
#define CO_O RCTL_T(KC_O)

#define GR_N LCTL_T(KC_N)
#define GR_R LSFT_T(KC_R)
#define GR_T LGUI_T(KC_T)
#define GR_S LALT_T(KC_S)
#define GR_H RALT_T(KC_H)
#define GR_A RGUI_T(KC_A)
#define GR_E RSFT_T(KC_E)
#define GR_I RCTL_T(KC_I)

#define ZH_TAB LT(_NAV, KC_TAB)
#define ZH_BSPC LSFT_T(KC_BSPC)
#define ZH_SPC LT(_FUN, KC_SPC)
#define ZH_ENT LT(_SYM, KC_ENT)

#define SYM2 MO(_SYM2)

#define XX KC_NO
#define __ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK_DHM] = LAYOUT_planck_grid(KC_Q, KC_W, KC_F, KC_P, KC_B, XX, XX, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, CO_A, CO_R, CO_S, CO_T, KC_G, XX, XX, KC_M, CO_N, CO_E, CO_I, CO_O, KC_Z, KC_X, KC_C, KC_D, KC_V, XX, XX, KC_K, KC_H, KC_COMM, KC_DOT, KC_QUOT, XX, XX, XX, ZH_TAB, ZH_BSPC, XX, XX, ZH_SPC, ZH_ENT, XX, XX, XX),
    [_GRAPHITE] = LAYOUT_planck_grid(KC_B, KC_L, KC_D, KC_W, KC_Z, XX, XX, KC_SCLN, KC_F, KC_O, KC_U, KC_J, GR_N, GR_R, GR_T, GR_S, KC_G, XX, XX, KC_Y, GR_H, GR_A, GR_E, GR_I, KC_Q, KC_X, KC_M, KC_C, KC_V, XX, XX, KC_K, KC_P, KC_DOT, KC_QUOT, KC_COMM, XX, XX, XX, ZH_TAB, ZH_BSPC, XX, XX, ZH_SPC, ZH_ENT, XX, XX, XX),
    [_NAV] = LAYOUT_planck_grid(KC_ESC, SGUI(KC_LBRC), XX, SGUI(KC_RBRC), XX, XX, XX, XX, A(KC_LEFT), KC_UP, A(KC_RGHT), XX, KC_LCTL, KC_LSFT, KC_LGUI, KC_LALT, C(KC_LEFT), XX, XX, G(KC_LEFT), KC_LEFT, KC_DOWN, KC_RGHT, G(KC_RGHT), G(KC_Z), G(KC_X), G(KC_C), G(KC_V), C(KC_RIGHT), XX, XX, G(KC_BSPC), A(KC_BSPC), KC_DEL, A(KC_DEL), G(KC_BSPC), XX, XX, XX, XX, XX, XX, XX, XX, SYM2, XX, XX, XX),
    [_SYM] = LAYOUT_planck_grid(KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, XX, XX, KC_CIRC, KC_7, KC_8, KC_9, KC_ASTR, KC_LCBR, KC_LPRN, KC_RPRN, KC_EQUAL, KC_RCBR, XX, XX, KC_AMPR, KC_4, KC_5, KC_6, KC_QUES, KC_LBRC, KC_MINS, KC_UNDS, KC_PLUS, KC_RBRC, XX, XX, KC_0, KC_1, KC_2, KC_3, KC_SLSH, XX, XX, XX, SYM2, XX, XX, XX, XX, XX, XX, XX, XX),
    [_SYM2] = LAYOUT_planck_grid(KC_TILD, XX, XX, XX, XX, XX, XX, XX, KC_KP_7, KC_KP_8, KC_KP_9, KC_PIPE, KC_GRV, XX, XX, XX, XX, XX, XX, XX, KC_KP_4, KC_KP_5, KC_KP_6, KC_BSLS, XX, XX, XX, XX, XX, XX, XX, KC_KP_0, KC_KP_1, KC_KP_2, KC_KP_3, XX, XX, XX, XX, XX, XX, XX, XX, XX, XX, XX, XX, XX),
    [_FUN] = LAYOUT_planck_grid(KC_MSTP, KC_MPRV, KC_MPLY, KC_MNXT, KC_BRIU, XX, XX, XX, KC_F7, KC_F8, KC_F9, KC_F10, KC_LCTL, KC_LSFT, KC_LGUI, KC_LALT, KC_BRID, XX, XX, XX, KC_F4, KC_F5, KC_F6, KC_F11, KC_MUTE, KC_VOLD, XX, KC_VOLU, XX, XX, XX, XX, KC_F1, KC_F2, KC_F3, KC_F12, XX, XX, XX, XX, XX, XX, XX, XX, XX, XX, XX, XX),
    [_GAME] = LAYOUT_planck_grid(KC_ESC, KC_Q, KC_W, KC_E, KC_R, XX, XX, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_TAB, KC_A, KC_S, KC_D, KC_F, XX, XX, KC_G, KC_H, KC_J, KC_K, KC_L, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, XX, XX, KC_B, KC_N, KC_M, KC_P, KC_SLSH, XX, XX, XX, MO(_GAME2), KC_SPC, XX, XX, TG(_GAME), TG(_GAME), XX, XX, XX),
    [_GAME2] = LAYOUT_planck_grid(__, KC_1, KC_2, KC_3, KC_4, XX, XX, XX, KC_F7, KC_F8, KC_F9, KC_F10, __, KC_5, KC_6, KC_7, KC_8, XX, XX, XX, KC_F4, KC_F5, KC_F6, KC_F11, __, KC_9, KC_0, XX, XX, XX, XX, XX, KC_F1, KC_F2, KC_F3, KC_F12, XX, XX, XX, XX, XX, XX, XX, __, __, XX, XX, XX),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ZH_TAB:
            return 0;
        case ZH_BSPC:
            return 0;
        case ZH_ENT:
            return 0;
        default:
            return TAPPING_TERM;
    }
}
