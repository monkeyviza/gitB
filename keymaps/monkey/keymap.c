#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_COPY, KC_PSTE, KC_CUT, KC_FIND, KC_MPLY, KC_5, KC_6, KC_7, KC_8, TO(1), KC_9, KC_0, KC_UP, KC_ENT, KC_MUTE, MO(3), KC_LEFT, KC_DOWN, KC_RGHT),
	[1] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(2), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(3), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT(RGB_SPI, RGB_SPD, KC_TRNS, QK_BOOT, KC_TRNS, RGB_SAI, RGB_SAD, KC_TRNS, KC_TRNS, TO(0), RGB_TOG, RGB_MOD, RGB_HUI, KC_TRNS, KC_TRNS, KC_TRNS, RGB_VAI, RGB_HUD, RGB_VAD)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)





