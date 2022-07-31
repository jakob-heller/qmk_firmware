#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_all(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL, KC_DEL, KC_INSERT,  KC_PSCR, KC_SCRL, KC_PAUSE,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_BSPC, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_ENT,          KC_P7,   KC_P8,   KC_P9,   KC_PMNS,
        MO(2)  , KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_BSLS,          KC_P4,   KC_P5,   KC_P6,   KC_PPLS,
        KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   KC_P1,   KC_P2,   KC_P3,   KC_PENT,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, MO(1),   MO(1),   KC_LEFT, KC_DOWN, KC_RGHT, KC_P0,   KC_PDOT, KC_PENT
    ),
    [1] = LAYOUT_all(
        QK_BOOT,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, RGB_TOG, _______, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______, _______,          _______, _______, _______, _______,
        BL_TOGG, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______,
        _______, _______, _______, _______, BL_DEC,  BL_TOGG, BL_INC,  _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
    [2] = LAYOUT_all(
        _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_SLEP,
        _______, KC_VOLU, KC_VOLD, KC_CALC, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, KC_MPRV, KC_MNXT, KC_MPLY, _______, _______, _______, MACRO_2, _______, MACRO_1, _______, _______, _______, _______,          _______, _______, _______, _______,
        _______, MACRO_0, MACRO_3, _______, _______, _______, _______, _______, _______, _______, _______, MACRO_4, _______,                   _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______, _______, _______, _______
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case MACRO_0:
                SEND_STRING(SS_DOWN(X_LALT)SS_DOWN(X_P0)SS_UP(X_P0)SS_DOWN(X_P2)SS_UP(X_P2)SS_DOWN(X_P2)SS_UP(X_P2)SS_DOWN(X_P8)SS_UP(X_P8)SS_UP(X_LALT));
                return false;
            case MACRO_1:
                SEND_STRING(SS_DOWN(X_LALT)SS_DOWN(X_P0)SS_UP(X_P0)SS_DOWN(X_P2)SS_UP(X_P2)SS_DOWN(X_P4)SS_UP(X_P4)SS_DOWN(X_P6)SS_UP(X_P6)SS_UP(X_LALT));
                return false;
            case MACRO_2:
                SEND_STRING(SS_DOWN(X_LALT)SS_DOWN(X_P0)SS_UP(X_P0)SS_DOWN(X_P2)SS_UP(X_P2)SS_DOWN(X_P5)SS_UP(X_P5)SS_DOWN(X_P2)SS_UP(X_P2)SS_UP(X_LALT));
                return false;
            case MACRO_3:
                SEND_STRING(SS_DOWN(X_LALT)SS_DOWN(X_P0)SS_UP(X_P0)SS_DOWN(X_P2)SS_UP(X_P2)SS_DOWN(X_P2)SS_UP(X_P2)SS_DOWN(X_P3)SS_UP(X_P3)SS_UP(X_LALT));
                return false;
            case MACRO_4:
                SEND_STRING(SS_DOWN(X_LSFT)SS_DOWN(X_QUOT)SS_UP(X_QUOT)SS_DOWN(X_QUOT)SS_UP(X_QUOT)SS_DOWN(X_QUOT)SS_UP(X_QUOT)SS_DOWN(X_QUOT)SS_UP(X_QUOT)SS_DOWN(X_QUOT)SS_UP(X_QUOT)SS_DOWN(X_QUOT)SS_UP(X_QUOT)SS_UP(X_LSFT)SS_DOWN(X_LEFT)SS_UP(X_LEFT)SS_DOWN(X_LEFT)SS_UP(X_LEFT)SS_DOWN(X_LEFT)SS_UP(X_LEFT));
                return false;
        }
    }

    return true;
};
