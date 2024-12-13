// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "features/achordion.h"

// #define SFT_A LSFT_T(KC_A)
#define CTL_X LCTL_T(KC_X)
#define ALT_C LALT_T(KC_C)
#define GUI_V LGUI_T(KC_V)
#define GUI_M RGUI_T(KC_M)
#define ALT_COM RALT_T(KC_COMM)
#define CTL_DOT RCTL_T(KC_DOT)
// #define SFT_SCL RSFT_T(KC_SCLN)

#define L1_SPC LT(1,KC_SPC)
#define L2_BSPC LT(2,KC_BSPC)
#define L2_SPC LT(2,KC_SPC)

#define SFT_TAB LSFT_T(KC_TAB)
#define SFT_ENT RSFT_T(KC_ENT)
// #define SFT_SPC LSFT_T(KC_SPC)
// #define SFT_BSP RSFT_T(KC_BSPC)

// #define LSCG_L LSG(C(KC_L))
// #define L3_BSPC LT(3,KC_BSPC)

#define S_GRV S(KC_GRV)
#define S_SLSH S(KC_SLSH)
#define S_MINS S(KC_MINS)
#define S_EQL S(KC_EQL)
#define S_SCLN S(KC_SCLN)
#define S_BSLS S(KC_BSLS)
#define S_LBRC S(KC_LBRC)
#define S_RBRC S(KC_RBRC)
#define S_QUOT S(KC_QUOT)
#define S_COMM S(KC_COMM)
#define S_DOT S(KC_DOT)
#define L3_SPC LT(3,KC_SPC)
#define GUI_EQL RGUI_T(KC_EQL)
#define GUI_SLS LGUI_T(KC_SLSH)

// #define GUI_MT RGUI_T(KC_MUTE) 
// #define ALT_VD RALT_T(KC_VOLD) 

#define GUI_VD RGUI_T(KC_VOLD)
#define ALT_MT RALT_T(KC_MUTE)
#define CTL_VU RCTL_T(KC_VOLU)



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // alpha keys
    // low row mods
    // all keys are available
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_RBRC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_GRV,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    KC_Z,   CTL_X,   ALT_C,   GUI_V,    KC_B,                         KC_N,   GUI_M, ALT_COM, CTL_DOT, KC_SLSH, KC_BSLS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,  L1_SPC, SFT_TAB,    SFT_ENT,  L2_SPC, KC_CAPS
                                      //`--------------------------'  `--------------------------'
    ),

    // numbers
    // instant mods on the left side
    // navigation on the right side
    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LSFT, KC_BTN3, KC_BTN2, KC_BTN1, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, KC_RSFT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, KC_LCTL, KC_LALT, KC_LGUI, XXXXXXX,                      XXXXXXX, KC_RGUI, ALT_COM, CTL_DOT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
    ),

    // symbols
    // partentheses, brackets and braces on the right side
    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        S_GRV, S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5),                      S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_GRV,  S_SLSH,  S_MINS, KC_MINS,   S_EQL,  S_QUOT,                       S_BSLS, KC_LBRC, KC_RBRC,  S_LBRC,  S_RBRC, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, KC_BSLS,  S_SCLN, GUI_SLS, KC_QUOT,                      XXXXXXX, GUI_EQL,  S_COMM,   S_DOT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
    ),

    // F keys
    // media and system keys
    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_CAPS, KC_LSFT, KC_BRID, XXXXXXX, KC_BRIU, XXXXXXX,                      XXXXXXX, KC_MRWD, KC_MPLY, KC_MFFD, KC_RSFT,  KC_F12,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, KC_LCTL, KC_LALT, KC_LGUI, XXXXXXX,                      XXXXXXX,  GUI_VD,  ALT_MT,  CTL_VU, XXXXXXX, QK_BOOT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
    )
};



// bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
//     switch (keycode) {
//         case L2_SPC:
//         case L1_SPC:
//             // Immediately select the hold action when another key is tapped.
//             return true;
//         default:
//             // Do not select the hold action when another key is tapped.
//             return false;
//     }
// }

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SFT_TAB:
        case SFT_ENT:
            // Immediately select the hold action when another key is pressed.
            return true;
        default:
            // Do not select the hold action when another key is pressed.
            return false;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    if (!process_achordion(keycode, record)) {
        return false; 
    }
    
    return true;
}

void matrix_scan_user(void) {
    achordion_task();
}

bool achordion_chord(uint16_t tap_hold_keycode, keyrecord_t* tap_hold_record,
                     uint16_t other_keycode, keyrecord_t* other_record) {
    
    // allow thumb keys hold for the same side on the left 
    if (tap_hold_record->event.key.row == 3) {
        return true;
    }                                         

    // allow thumb keys hold for the same side on the right
    if (tap_hold_record->event.key.row == 7) {
        return true;
    }

    // Otherwise, follow the opposite hands rule.
    return achordion_opposite_hands(tap_hold_record, other_record);
}

bool achordion_eager_mod(uint8_t mod) {
    return false;
}

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, 1, 2, 3);
}

const uint16_t PROGMEM meh_combo[] = {SFT_TAB, SFT_ENT, COMBO_END};
// const uint16_t PROGMEM test_combo2[] = {KC_C, KC_D, COMBO_END};
combo_t key_combos[] = {
    COMBO(meh_combo, KC_MEH),
    // COMBO(test_combo2, LCTL(KC_Z)), // keycodes with modifiers are possible too!
};
