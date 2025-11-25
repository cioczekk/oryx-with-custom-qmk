#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
};



#define DUAL_FUNC_0 LT(3, KC_P)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TG(4),                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           TG(5),                                          TG(7),          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           TG(6),                                                                          KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TAB,         KC_LEFT_SHIFT,  KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_RIGHT_ALT,   KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_BSPC,        MO(2),          KC_TRANSPARENT,                 KC_TRANSPARENT, MO(1),          KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          
    KC_TRANSPARENT, DUAL_FUNC_0,    KC_EXLM,        KC_UP,          KC_AT,          KC_HASH,        KC_NO,                                          KC_NO,          KC_MINUS,       KC_LPRN,        KC_LCBR,        KC_LBRC,        KC_PIPE,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_DLR,         KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_PERC,        KC_NO,                                                                          KC_NO,          KC_EQUAL,       KC_RIGHT_GUI,   KC_RIGHT_ALT,   KC_RIGHT_CTRL,  KC_RIGHT_SHIFT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_QUOTE,       KC_DQUO,                                        KC_UNDS,        KC_RPRN,        KC_RCBR,        KC_RBRC,        KC_BSLS,        KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, MO(3),          KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_NO,                                          KC_NO,          KC_MINUS,       KC_7,           KC_8,           KC_9,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_F6,          KC_NO,                                                                          KC_NO,          KC_EQUAL,       KC_4,           KC_5,           KC_6,           KC_ASTR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,                                         KC_PLUS,        KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_F12,         KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_0,           KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, MO(3),          KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          
    KC_NO,          KC_1,           KC_5,           KC_3,           KC_1,           KC_9,           KC_NO,                                          KC_NO,          KC_TRANSPARENT, KC_8,           KC_2,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                                                          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_NO,                                          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_ALT,    KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_NO,                                                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_CTRL,   KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_ALT,    KC_Y,           KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_BSPC,        KC_LEFT_ALT,    KC_TRANSPARENT,                 KC_NO,          KC_NO,          KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TAB,         KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_TRANSPARENT, KC_NO,                                                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_Z,           KC_X,           KC_C,           KC_V,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_LEFT_ALT,    KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_ESCAPE,                      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_F10,         KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_LEFT_ALT,    KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_ESCAPE,                      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_A,           KC_S,           KC_TRANSPARENT, KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_Z,           KC_X,           KC_TRANSPARENT, KC_NO,                                                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', '*', '*', 'R', 'R', 'R', 'R', 'R',
                 '*', '*', '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_K, KC_L, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_ESCAPE),
    COMBO(combo1, KC_ENTER),
};



extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200} },

    [1] = { {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229} },

    [2] = { {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255} },

    [3] = { {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251} },

    [4] = { {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {145,234,227}, {125,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {145,234,227}, {125,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {145,234,227}, {125,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {145,234,227}, {125,234,227}, {89,234,227}, {248,234,227}, {89,234,227}, {145,234,227}, {39,234,227}, {89,234,227}, {254,234,227}, {89,234,227}, {89,234,227}, {39,234,227}, {89,234,227}, {243,150,255}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227} },

    [5] = { {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {254,234,227}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82} },

    [6] = { {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {202,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {202,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {202,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {202,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {202,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {254,234,227}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86} },

    [7] = { {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {254,234,227}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
      case 7:
        set_layer_color(7);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}





bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_GRAVE);
        } else {
          unregister_code16(KC_GRAVE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_TILD);
        } else {
          unregister_code16(KC_TILD);
        }  
      }  
      return false;
    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}

