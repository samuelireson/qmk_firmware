#pragma once

/* Select hand configuration */
#define MASTER_LEFT

#define QUICK_TAP_TERM 0
#define TAPPING_TERM 200

// Left-hand home row mods
#define HOME_LP LGUI_T(KC_A)
#define HOME_LR LALT_T(KC_S)
#define HOME_LM LCTL_T(KC_D)
#define HOME_LI LSFT_T(KC_F)

// Right-hand home row mods
#define HOME_RI RSFT_T(KC_J)
#define HOME_RM RCTL_T(KC_K)
#define HOME_RR LALT_T(KC_L)
#define HOME_RP LGUI_T(KC_SCLN)

// THUMB KEYS
#define LTH_I LT(1, KC_ESC)
#define LTH_P KC_SPC
#define LTH_O LT(2, KC_TAB)
#define RTH_I LT(3, KC_DEL)
#define RTH_P KC_BSPC
#define RTH_O LT(4, KC_ENT)

#ifdef RGBLIGHT_ENABLE
#    define RGBLIGHT_EFFECT_BREATHING
#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    define RGBLIGHT_EFFECT_SNAKE
#    define RGBLIGHT_EFFECT_KNIGHT
#    define RGBLIGHT_EFFECT_CHRISTMAS
#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
#    define RGBLIGHT_EFFECT_RGB_TEST
#    define RGBLIGHT_EFFECT_ALTERNATING
#    define RGBLIGHT_EFFECT_TWINKLE
#    define RGBLIGHT_LIMIT_VAL 120
#    define RGBLIGHT_HUE_STEP 10
#    define RGBLIGHT_SAT_STEP 17
#    define RGBLIGHT_VAL_STEP 17
#endif

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
