#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
};

#define DUAL_FUNC_0 LT(3, KC_T)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          TG(4),                                          KC_NO,          KC_NO,          ST_MACRO_1,     KC_NO,          KC_NO,          KC_NO,          QK_BOOT,        
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           TG(5),                                          TG(7),          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_NO,          
    KC_LEFT_ALT,    KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           TG(6),                                                                          TG(8),          KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_NO,          
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_GUI,   
    KC_LEFT_CTRL,   KC_NO,          KC_NO,          KC_TAB,         KC_LEFT_SHIFT,  ST_MACRO_0,                                                                                                     ST_MACRO_2,     KC_RIGHT_ALT,   KC_RIGHT_CTRL,  KC_NO,          KC_NO,          KC_NO,          
    KC_BSPC,        LT(1, KC_ESCAPE),KC_TRANSPARENT,                 KC_TRANSPARENT, LT(2, KC_ENTER),KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_NO,                                          KC_NO,          KC_ASTR,        KC_7,           KC_8,           KC_9,           KC_MINUS,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_NO,                                                                          KC_TRANSPARENT, KC_SLASH,       KC_4,           KC_5,           KC_6,           KC_PLUS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F11,         KC_F12,         KC_NO,          KC_NO,          KC_NO,                                          KC_CIRC,        KC_1,           KC_2,           KC_3,           KC_DOT,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_0,           KC_EQUAL,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 TT(3),          LT(3, KC_ENTER),KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_GRAVE,       KC_TILD,        KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_RPRN,        KC_LPRN,        KC_QUOTE,       KC_DQUO,        KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_NO,                                                                          KC_TRANSPARENT, KC_RCBR,        KC_LCBR,        KC_MINUS,       KC_UNDS,        KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_NO,          KC_EQUAL,                                       KC_RBRC,        KC_LBRC,        KC_BSLS,        KC_PIPE,        KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LT(3, KC_ESCAPE),TT(3),                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, RGB_SPD,        RGB_SPI,        KC_MS_UP,       RGB_VAD,        RGB_VAI,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_UP,          QK_DYNAMIC_TAPPING_TERM_DOWN,QK_DYNAMIC_TAPPING_TERM_UP,KC_ENTER,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       QK_DYNAMIC_TAPPING_TERM_PRINT,KC_TRANSPARENT, 
    KC_TRANSPARENT, TOGGLE_LAYER_COLOR,RGB_TOG,        RGB_MODE_FORWARD,KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,        OSM(MOD_LSFT),  QK_DYNAMIC_TAPPING_TERM_DOWN,KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_MS_BTN1,     KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_NO,                                          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_NO,                                                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_CTRL,   KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_ALT,    KC_Y,           KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_BSPC,        KC_LEFT_ALT,    TO(0),                          KC_NO,          KC_NO,          KC_TRANSPARENT
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
  [8] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_NO,                                                                                                          KC_NO,          KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, MO(10),         KC_TRANSPARENT,                 KC_TRANSPARENT, MO(9),          KC_TRANSPARENT
  ),
  [9] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          
    KC_NO,          DUAL_FUNC_0,    KC_EXLM,        KC_UP,          KC_AT,          KC_HASH,        KC_NO,                                          KC_NO,          KC_MINUS,       KC_LPRN,        KC_LCBR,        KC_LBRC,        KC_PIPE,        KC_TRANSPARENT, 
    KC_NO,          KC_DLR,         KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_PERC,        KC_NO,                                                                          KC_NO,          KC_EQUAL,       KC_RIGHT_GUI,   KC_RIGHT_ALT,   KC_RIGHT_CTRL,  KC_RIGHT_SHIFT, KC_TRANSPARENT, 
    KC_NO,          KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_QUOTE,       KC_DQUO,                                        KC_UNDS,        KC_RPRN,        KC_RCBR,        KC_RBRC,        KC_BSLS,        KC_NO,          
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, MO(11),         KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [10] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_NO,                                          KC_NO,          KC_MINUS,       KC_7,           KC_8,           KC_9,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_F6,          KC_NO,                                                                          KC_NO,          KC_EQUAL,       KC_4,           KC_5,           KC_6,           KC_ASTR,        KC_TRANSPARENT, 
    KC_NO,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,                                         KC_PLUS,        KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_NO,          
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_F12,         KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_0,           KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, MO(11),         KC_TRANSPARENT
  ),
  [11] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          
    KC_NO,          KC_1,           KC_5,           KC_3,           KC_1,           KC_9,           KC_NO,                                          KC_NO,          KC_TRANSPARENT, KC_8,           KC_2,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                                                          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
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

const uint16_t PROGMEM combo0[] = { KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_S, KC_D, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_ENTER),
    COMBO(combo1, KC_ESCAPE),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_Z:
            return g_tapping_term + 40;
        case KC_X:
            return g_tapping_term + 40;
        case KC_C:
            return g_tapping_term + 40;
        case KC_V:
            return g_tapping_term + 40;
        case KC_M:
            return g_tapping_term + 40;
        case KC_COMMA:
            return g_tapping_term + 40;
        case KC_DOT:
            return g_tapping_term + 40;
        case KC_SLASH:
            return g_tapping_term + 40;
        default:
            return g_tapping_term;
    }
}


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
    [0] = { {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {89,234,227}, {177,248,82}, {192,252,86}, {125,234,227}, {125,234,227}, {0,0,0}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {125,234,227}, {146,234,227}, {68,172,200}, {125,234,227}, {125,234,227}, {0,0,0}, {125,234,227} },

    [1] = { {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {254,234,227}, {254,234,227}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {199,226,143}, {171,249,215}, {199,226,143} },

    [2] = { {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {30,239,242}, {254,234,227}, {254,234,227}, {30,239,242} },

    [3] = { {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {254,234,227}, {254,234,227}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {171,249,215}, {254,234,227}, {254,234,227}, {171,249,215} },

    [4] = { {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {145,234,227}, {125,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {145,234,227}, {125,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {145,234,227}, {125,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {145,234,227}, {125,234,227}, {89,234,227}, {248,234,227}, {89,234,227}, {145,234,227}, {39,234,227}, {89,234,227}, {254,234,227}, {89,234,227}, {89,234,227}, {39,234,227}, {89,234,227}, {243,150,255}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227}, {89,234,227} },

    [5] = { {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {254,234,227}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82}, {177,248,82} },

    [6] = { {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {202,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {202,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {202,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {202,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {202,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {254,234,227}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86}, {192,252,86} },

    [7] = { {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {254,234,227}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163}, {175,142,163} },

    [8] = { {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200}, {254,234,227}, {68,172,200}, {68,172,200}, {68,172,200}, {68,172,200} },

    [9] = { {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229}, {52,240,229} },

    [10] = { {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255}, {22,208,255} },

    [11] = { {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251}, {0,188,251} },

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
      case 8:
        set_layer_color(8);
        break;
      case 9:
        set_layer_color(9);
        break;
      case 10:
        set_layer_color(10);
        break;
      case 11:
        set_layer_color(11);
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
  case QK_MODS ... QK_MODS_MAX: 
    // Mouse keys with modifiers work inconsistently across operating systems, this makes sure that modifiers are always
    // applied to the mouse key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
    if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_F5)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_RGUI(SS_RSFT(SS_TAP(X_A))));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_F4) ));
    }
    break;

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

