// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *         ┬───┐
     *         │ R │
     * ├───┼───┼───┼
     * │ 1 │ 2 │ 3 │
     * ├───┼───┼───┼
     * │ 4 │ 5 │ 6 │
     * ├───┼───┼───┼
     * │ 7 │ 8 │ 9 │
     * └───┴───┴───┴
     */
    [0] = LAYOUT(
        KC_1,   KC_2,   KC_3,   KC_MUTE,
        KC_4,   KC_5,   KC_6,
        KC_7,   KC_8,   KC_9
    )

    #if defined(ENCODER_MAP_ENABLE)
     const uint16_t PROGEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
         [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },};
    #endif
};
