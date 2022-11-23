// clang-format off
#pragma once

#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_FORCE_HOLD

// Encoder settings
#undef ENCODERS_PAD_A
#define ENCODERS_PAD_A { F5 }
#undef ENCODERS_PAD_B
#define ENCODERS_PAD_B { F4 }
#undef ENCODERS_PAD_A_RIGHT
#define ENCODERS_PAD_A_RIGHT { F4 }
#undef ENCODERS_PAD_B_RIGHT
#define ENCODERS_PAD_B_RIGHT { F5 }
#undef ENCODER_RESOLUTION
#define ENCODER_RESOLUTION 2

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY 0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY 0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 4
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 128

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/
