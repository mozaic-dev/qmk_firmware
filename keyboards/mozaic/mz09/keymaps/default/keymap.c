/* Copyright 2023 Mozaic®

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	// Default layer
	[0] = LAYOUT(
		KC_MPRV, KC_MPLY, KC_MNXT,
		KC_MUTE, MO(1),   KC_VOLU,\
		KC_NO,   KC_NO,   KC_VOLD),

	// Fn Layer
	[1] = LAYOUT(
		RGB_HUI,  RGB_HUD, _______,
		RGB_TOG,  _______, RGB_VAI,
		RGB_RMOD, RGB_MOD, RGB_VAD),

	// Fn2 Layer
	[2] = LAYOUT(
		_______, _______, _______,
		_______, _______, _______,
		_______, _______, _______),

	// Fn3 Layer
	[3] = LAYOUT(
		_______, _______, _______,
		_______, _______, _______,
		_______, _______, _______)
};
