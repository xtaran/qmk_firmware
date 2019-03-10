/* Copyright 2018 Rasmus Schults <rasmusx@gmail.com>
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
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef ST_H
#define ST_H

#include "quantum.h"

#define NO KC_NO

#define KEYMAP( \
    K4A, K4B, K4C, K4D, K4E, K4F, K4G, K4H, K4I, K4J, K4K, K4L, K4M, K4N, K4O, K4P, \
    K3A, K3B, K3C, K3D, K3E, K3F, K3G, K3H, K3I, K3J, K3K, K3L, K3M, K3N,      K3P, \
    K2A, K2B, K2C, K2D, K2E, K2F, K2G, K2H, K2I, K2J, K2K, K2L, K2M, K2N,           \
    K1A, K1B, K1C, K1D, K1E, K1F, K1G, K1H, K1I, K1J, K1K, K1L, K1M, K1N, K1O,      \
    K0A, K0B, K0C,                K0G,           K0J, K0K,      K0M, K0N, K0O, K0P  \
) { \
  { KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO    }, \
  { KC_##K4A, KC_##K4B, KC_##K4C, KC_##K4D, KC_##K4E, KC_##K4F, KC_##K4G, KC_##K4H, KC_##K4I, KC_##K4J, KC_##K4K, KC_##K4L, KC_##K4M, KC_##K4N, KC_##K4O, KC_##K4P, KC_NO,    KC_NO,    KC_NO,    KC_NO    }, \
  { KC_##K3A, KC_##K3B, KC_##K3C, KC_##K3D, KC_##K3E, KC_##K3F, KC_##K3G, KC_##K3H, KC_##K3I, KC_##K3J, KC_##K3K, KC_##K3L, KC_##K3M, KC_##K3N, KC_NO,    KC_##K3P, KC_NO,    KC_NO,    KC_NO,    KC_NO    }, \
  { KC_##K2A, KC_##K2B, KC_##K2C, KC_##K2D, KC_##K2E, KC_##K2F, KC_##K2G, KC_##K2H, KC_##K2I, KC_##K2J, KC_##K2K, KC_##K2L, KC_##K2M, KC_##K2N, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO    }, \
  { KC_##K1A, KC_##K1B, KC_##K1C, KC_##K1D, KC_##K1E, KC_##K1F, KC_##K1G, KC_##K1H, KC_##K1I, KC_##K1J, KC_##K1K, KC_##K1L, KC_##K1M, KC_##K1N, KC_##K1O, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO    }, \
  { KC_##K0A, KC_##K0B, KC_##K0C, KC_NO,    KC_NO,    KC_NO,    KC_##K0G, KC_NO,    KC_NO,    KC_##K0J, KC_##K0K, KC_NO,    KC_##K0M, KC_##K0N, KC_##K0O, KC_##K0P, KC_NO,    KC_NO,    KC_NO,    KC_NO    }  \
}

#define KEYMAP_66_ansi( \
    K4A, K4B, K4C, K4D, K4E, K4F, K4G, K4H, K4I, K4J, K4K, K4L, K4M, K4O,      K4P, \
    K3A, K3B, K3C, K3D, K3E, K3F, K3G, K3H, K3I, K3J, K3K, K3L, K3M, K3N,      K3P, \
    K2A, K2B, K2C, K2D, K2E, K2F, K2G, K2H, K2I, K2J, K2K, K2L,      K2N,           \
    K1A,      K1C, K1D, K1E, K1F, K1G, K1H, K1I, K1J, K1K, K1L,      K1M, K1O,      \
    K0A, K0B, K0C,                K0G,           K0J, K0K,      K0M, K0N, K0O, K0P  \
) { \
  { NO,    NO,    NO,    NO,    NO,    NO,    NO,    NO,    NO,    NO,    NO,    NO,    NO,    NO,    NO,    NO,    NO,    NO,    NO,    NO    }, \
  { K4A, K4B, K4C, K4D, K4E, K4F, K4G, K4H, K4I, K4J, K4K, K4L, K4M, NO,    K4O, K4P, NO,    NO,    NO,    NO    }, \
  { K3A, K3B, K3C, K3D, K3E, K3F, K3G, K3H, K3I, K3J, K3K, K3L, K3M, K3N, NO,    K3P, NO,    NO,    NO,    NO    }, \
  { K2A, K2B, K2C, K2D, K2E, K2F, K2G, K2H, K2I, K2J, K2K, K2L, NO,    K2N, NO,    NO,    NO,    NO,    NO,    NO    }, \
  { K1A, NO,    K1C, K1D, K1E, K1F, K1G, K1H, K1I, K1J, K1K, K1L, K1M, NO,    K1O, NO,    NO,    NO,    NO,    NO    }, \
  { K0A, K0B, K0C, NO,    NO,    NO,    K0G, NO,    NO,    K0J, K0K, NO,    K0M, K0N, K0O, K0P, NO,    NO,    NO,    NO    }  \
}

#define LAYOUT_66_ansi KEYMAP_66_ansi


#endif
