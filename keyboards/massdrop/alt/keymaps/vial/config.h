/* Copyright 2022 SlyCedix (slycedix@gmail.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a 0copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define VIAL_KEYBOARD_UID {0x56, 0x79, 0xAC, 0x14, 0x90, 0x6C, 0xB3, 0x3D}

// Use keys Esc and Tab to unlock the keyboard
#define VIAL_UNLOCK_COMBO_ROWS { 0, 1 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 0 }

// Enable additional LED functionality
#define USB_LED_INDICATOR_ENABLE
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS 
#define RGB_MATRIX_KEYPRESSES
