/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * ws2812b.cpp - Library for controlling a WS2812B based RGB LED
 * Created by Michael Conradt, April 14 2017.
 */

#include "Marlin.h"

#if ENABLED(WS2812B)

#include <Adafruit_NeoPixel.h>
#include "ws2812b.h"

Adafruit_NeoPixel pixel = Adafruit_NeoPixel(1, WS2812B_PIN, NEO_GRB + NEO_KHZ800);

void set_led_color(byte red, byte green, byte blue) {
  pixel.setPixelColor(0, pixel.Color(red, green, blue));
  pixel.show();
}

#endif //WS2812B
