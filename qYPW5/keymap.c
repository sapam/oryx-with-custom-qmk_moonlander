#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  HSV_0_255_255,
  HSV_86_255_128,
  HSV_172_255_255,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
};



enum tap_dance_codes {
  DANCE_0,
};

#define DUAL_FUNC_0 LT(5, KC_B)
#define DUAL_FUNC_1 LT(1, KC_F15)
#define DUAL_FUNC_2 LT(15, KC_F22)
#define DUAL_FUNC_3 LT(7, KC_1)
#define DUAL_FUNC_4 LT(12, KC_H)
#define DUAL_FUNC_5 LT(6, KC_F2)
#define DUAL_FUNC_6 LT(1, KC_K)
#define DUAL_FUNC_7 LT(1, KC_S)
#define DUAL_FUNC_8 LT(2, KC_D)
#define DUAL_FUNC_9 LT(10, KC_F2)
#define DUAL_FUNC_10 LT(14, KC_R)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_MAC_PASTE,                                   DM_PLY1,        KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSLS,        
    KC_TAB,         KC_SCLN,        KC_COMMA,       KC_DOT,         KC_P,           KC_Y,           KC_MAC_COPY,                                    DM_PLY2,        KC_F,           KC_G,           KC_C,           KC_R,           KC_L,           KC_SLASH,       
    KC_LEFT_GUI,    KC_A,           KC_O,           KC_E,           KC_U,           KC_I,           KC_HOME,                                                                        KC_END,         KC_D,           KC_H,           KC_T,           KC_N,           KC_S,           KC_MINUS,       
    KC_LEFT_SHIFT,  KC_QUOTE,       KC_Q,           KC_J,           KC_K,           KC_X,                                           KC_B,           KC_M,           KC_W,           KC_V,           KC_Z,           KC_RIGHT_SHIFT, 
    KC_LEFT_CTRL,   LT(1, KC_GRAVE),KC_LEFT_ALT,    KC_LEFT,        KC_RIGHT,       MO(2),                                                                                                          KC_ESCAPE,      KC_UP,          KC_DOWN,        KC_LBRC,        KC_RBRC,        TD(DANCE_0),    
    KC_BSPC,        KC_DELETE,      KC_LEFT_CTRL,                   KC_LEFT_GUI,    KC_ENTER,       KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    ST_MACRO_0,     KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_KP_COMMA,    KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_F12,         
    ST_MACRO_1,     KC_TRANSPARENT, KC_DLR,         KC_LPRN,        KC_RPRN,        KC_GRAVE,       KC_PAGE_UP,                                                                     KC_PGDN,        KC_MINUS,       KC_4,           KC_5,           KC_6,           KC_PLUS,        KC_PAGE_UP,     
    KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_LBRC,        KC_RBRC,        KC_TILD,                                        KC_NO,          KC_1,           KC_2,           KC_3,           KC_BSLS,        KC_PGDN,        
    KC_TRANSPARENT, KC_TRANSPARENT, HSV_0_255_255,  HSV_86_255_128, HSV_172_255_255,RGB_MODE_FORWARD,                                                                                                RGB_TOG,        KC_NO,          KC_DOT,         KC_0,           KC_EQUAL,       KC_TRANSPARENT, 
    RGB_VAD,        RGB_VAI,        TOGGLE_LAYER_COLOR,                RGB_SLD,        RGB_HUD,        RGB_HUI
  ),
  [2] = LAYOUT_moonlander(
    AU_TOGG,        KC_NO,          KC_NO,          TO(3),          TO(4),          TO(5),          DM_RSTP,                                        DM_RSTP,        TO(6),          TO(7),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    MU_TOGG,        KC_NO,          KC_NO,          KC_MS_UP,       KC_NO,          KC_NO,          DM_PLY1,                                        DM_REC1,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    MU_NEXT,        KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_NO,          DM_PLY2,                                                                        DM_REC2,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_NO,          KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_MAC_CUT,     KC_MAC_COPY,    KC_MAC_PASTE,                   KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE
  ),
  [3] = LAYOUT_moonlander(
    TO(0),          LSFT(KC_1),     LSFT(KC_2),     LSFT(KC_4),     LSFT(KC_4),     LSFT(KC_5),     KC_TRANSPARENT,                                 KC_C,           LSFT(KC_6),     LSFT(KC_7),     LSFT(KC_8),     LSFT(KC_9),     KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_EQUAL,                                       LCTL(KC_W),     KC_TRANSPARENT, KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MINUS,                                                                       KC_W,           KC_DOT,         KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_COMMA,       KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_TRANSPARENT, LCTL(KC_U),     
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_SPACE),                                                                                                 LCTL(KC_SPACE), KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_0,        KC_TRANSPARENT, LCTL(KC_D),     
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    TO(0),          LCTL(KC_C),     LALT(LCTL(LSFT(KC_C))),KC_ENTER,       KC_NO,          DUAL_FUNC_0,    LCTL(LSFT(KC_5)),                                LSFT(KC_BSLS),  LCTL(LSFT(KC_BSLS)),KC_NO,          KC_NO,          KC_NO,          KC_0,           LALT(KC_I),     
    LCTL(KC_P),     KC_NO,          LSFT(KC_KP_8),  KC_NO,          KC_NO,          LCTL(LSFT(KC_9)),LCTL(LSFT(KC_6)),                                LCTL(KC_BSLS),  LALT(LSFT(KC_BSLS)),KC_7,           KC_8,           KC_9,           KC_NO,          LALT(LCTL(LSFT(KC_COMMA))),
    LCTL(LSFT(KC_P)),LSFT(KC_KP_4),  LSFT(KC_KP_5),  LSFT(KC_KP_6),  KC_KP_PLUS,     LCTL(LSFT(KC_0)),LCTL(LSFT(KC_7)),                                                                LALT(KC_BSLS),  LALT(LCTL(KC_BSLS)),KC_4,           KC_5,           KC_6,           KC_NO,          LALT(LCTL(LSFT(KC_DOT))),
    LALT(KC_G),     LGUI(KC_A),     LSFT(KC_KP_2),  LGUI(KC_O),     KC_KP_MINUS,    LALT(KC_F1),                                    ST_MACRO_2,     KC_1,           KC_2,           KC_3,           KC_NO,          KC_K,           
    LALT(LCTL(LSFT(KC_G))),KC_3,           KC_2,           LCTL(KC_PAGE_UP),LCTL(KC_INSERT),LSFT(KC_P),                                                                                                     LCTL(KC_E),     LCTL(LSFT(KC_R)),LALT(LSFT(KC_R)),KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_LEFT_ALT,    
    KC_Q,           KC_T,           KC_Y,                           KC_W,           KC_E,           KC_R
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PC_PASTE,                                    DM_PLY1,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PC_COPY,                                     DM_PLY2,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_CTRL,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          
    KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(KC_A)),                LCTL(LSFT(KC_M)),KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    LSFT(KC_MS_BTN3),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_MS_BTN3),                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_moonlander(
    KC_GRAVE,       DUAL_FUNC_1,    DUAL_FUNC_2,    DUAL_FUNC_3,    DUAL_FUNC_4,    DUAL_FUNC_5,    KC_F11,                                         KC_F12,         DUAL_FUNC_6,    DUAL_FUNC_7,    DUAL_FUNC_8,    DUAL_FUNC_9,    DUAL_FUNC_10,   KC_BSPC,        
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_KP_MINUS,                                    KC_PAGE_UP,     KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_ALT,    KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_KP_PLUS,                                                                     KC_PGDN,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_TRANSPARENT, KC_K,           KC_L,                                           KC_B,           KC_M,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_CTRL,   KC_C,           KC_V,           KC_TRANSPARENT, KC_TRANSPARENT, KC_CAPS,                                                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          
    KC_COMMA,       KC_DOT,         KC_RIGHT_CTRL,                  KC_KP_ENTER,    KC_TRANSPARENT, KC_TRANSPARENT
  ),
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
    [1] = { {0,0,0}, {74,255,255}, {152,255,255}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {131,255,255}, {219,255,255}, {0,245,245}, {41,255,255}, {74,242,158}, {131,255,255}, {219,255,255}, {0,245,245}, {41,255,255}, {188,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {131,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {131,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {131,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {131,255,255}, {0,0,0}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {41,255,255}, {41,255,255}, {0,245,245}, {41,255,255} },

    [2] = { {219,255,255}, {219,255,255}, {219,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {219,255,255}, {0,0,0}, {0,0,0}, {74,255,255}, {219,255,255}, {219,255,255}, {0,0,0}, {219,255,255}, {176,250,235}, {0,0,0}, {219,255,255}, {0,0,0}, {219,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {74,242,158}, {74,242,158}, {0,245,245}, {176,250,235}, {74,255,255}, {0,0,0}, {0,245,245}, {0,0,0}, {219,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {219,255,255}, {219,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {219,255,255}, {219,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {219,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {234,255,255}, {234,255,255}, {74,255,255}, {176,250,235}, {0,245,245}, {0,0,0} },

    [3] = { {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {219,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {219,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {219,255,255}, {219,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {131,255,255}, {0,0,0}, {0,0,0}, {74,255,255}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {41,255,255}, {131,255,255}, {0,0,0}, {131,255,255}, {219,255,255}, {41,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {219,255,255}, {41,255,255}, {0,0,0}, {219,255,255}, {219,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245} },

    [4] = { {219,255,255}, {74,242,158}, {74,242,158}, {176,250,235}, {176,250,235}, {131,255,255}, {0,0,0}, {219,255,255}, {0,0,0}, {0,245,245}, {131,255,255}, {219,255,255}, {131,255,255}, {219,255,255}, {0,245,245}, {0,245,245}, {0,0,0}, {219,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {176,250,235}, {176,250,235}, {74,242,158}, {41,255,255}, {41,255,255}, {41,255,255}, {131,255,255}, {41,255,255}, {131,255,255}, {41,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {176,250,235}, {176,250,235}, {41,255,255}, {41,255,255}, {176,250,235}, {0,245,245}, {219,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {176,250,235}, {0,0,0}, {219,255,255}, {219,255,255}, {219,255,255}, {74,255,255}, {0,0,0}, {219,255,255}, {219,255,255}, {219,255,255}, {131,255,255}, {0,0,0}, {219,255,255}, {219,255,255}, {219,255,255}, {131,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {176,250,235}, {0,245,245}, {131,255,255}, {0,245,245}, {41,255,255}, {41,255,255}, {41,255,255}, {0,245,245} },

    [7] = { {12,218,204}, {0,0,0}, {0,0,0}, {104,218,204}, {0,0,0}, {35,255,255}, {0,0,0}, {104,218,204}, {0,0,0}, {104,218,204}, {35,255,255}, {104,218,204}, {104,218,204}, {0,0,0}, {104,218,204}, {35,255,255}, {0,0,0}, {104,218,204}, {0,0,0}, {0,0,0}, {35,255,255}, {0,0,0}, {9,217,244}, {56,255,255}, {0,0,0}, {35,255,255}, {9,215,246}, {9,217,244}, {9,215,246}, {51,255,255}, {137,255,244}, {137,255,244}, {131,247,242}, {131,247,242}, {0,0,0}, {131,247,242}, {12,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {35,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {35,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {35,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {56,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,247,242}, {51,255,255}, {9,217,244}, {9,217,244}, {0,0,0}, {0,0,0}, {131,247,242}, {0,0,0} },

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
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_KP_PLUS)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_KP_MINUS)));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_C))SS_DELAY(100)  SS_TAP(X_P));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_8)));
        } else {
          unregister_code16(LCTL(LSFT(KC_8)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_1);
        } else {
          unregister_code16(KC_1);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F1);
        } else {
          unregister_code16(KC_F1);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_2);
        } else {
          unregister_code16(KC_2);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F2);
        } else {
          unregister_code16(KC_F2);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_3);
        } else {
          unregister_code16(KC_3);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F3);
        } else {
          unregister_code16(KC_F3);
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_4);
        } else {
          unregister_code16(KC_4);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F4);
        } else {
          unregister_code16(KC_F4);
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_5);
        } else {
          unregister_code16(KC_5);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F5);
        } else {
          unregister_code16(KC_F5);
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_6);
        } else {
          unregister_code16(KC_6);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F6);
        } else {
          unregister_code16(KC_F6);
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_7);
        } else {
          unregister_code16(KC_7);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F7);
        } else {
          unregister_code16(KC_F7);
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_8);
        } else {
          unregister_code16(KC_8);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F8);
        } else {
          unregister_code16(KC_F8);
        }  
      }  
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_9);
        } else {
          unregister_code16(KC_9);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F9);
        } else {
          unregister_code16(KC_F9);
        }  
      }  
      return false;
    case DUAL_FUNC_10:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_0);
        } else {
          unregister_code16(KC_0);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F10);
        } else {
          unregister_code16(KC_F10);
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
    case HSV_0_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,255,255);
        }
        return false;
    case HSV_86_255_128:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(86,255,128);
        }
        return false;
    case HSV_172_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(172,255,255);
        }
        return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[1];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_HOLD: layer_on(1); break;
        case DOUBLE_TAP: layer_move(1); break;
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_HOLD:
          layer_off(1);
        break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_0_finished, dance_0_reset),
};
