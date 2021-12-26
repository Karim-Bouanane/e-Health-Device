#ifndef KEYBOARD_LAYOUT
#define KEYBOARD_LAYOUT

#include <touchgfx/widgets/Keyboard.hpp>
#include <touchgfx/hal/Types.hpp>
#include <fonts/ApplicationFontProvider.hpp>
#include "BitmapDatabase.hpp"

using namespace touchgfx;

/**
 * Array specifying the keys used in the CustomKeyboard.
 */
static const Keyboard::Key keyArray[30] =
    {
        {1, Rect(5, 48, 21, 30), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
        {2, Rect(5 + 21, 48, 21, 30), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
        {3, Rect(5 + 21 * 2, 48, 21, 30), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
        {4, Rect(5 + 21 * 3, 48, 21, 30), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
        {5, Rect(5 + 21 * 4, 48, 21, 30), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
        {6, Rect(5 + 21 * 5, 48, 21, 30), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
        {7, Rect(5 + 21 * 6, 48, 21, 30), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
        {8, Rect(5 + 21 * 7, 48, 21, 30), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
        {9, Rect(5 + 21 * 8, 48, 21, 30), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
        {10, Rect(5 + 21 * 9, 48, 21, 30), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
        {11, Rect(5 + 21 * 10, 48, 21, 30), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},

        {12, Rect(5, 81, 21, 30), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
        {13, Rect(5 + 21, 81, 21, 30), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
        {14, Rect(5 + 21 * 2, 81, 21, 30), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
        {15, Rect(5 + 21 * 3, 81, 21, 30), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
        {16, Rect(5 + 21 * 4, 81, 21, 30), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
        {17, Rect(5 + 21 * 5, 81, 21, 30), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
        {18, Rect(5 + 21 * 6, 81, 21, 30), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
        {19, Rect(5 + 21 * 7, 81, 21, 30), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
        {20, Rect(5 + 21 * 8, 81, 21, 30), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
        {21, Rect(5 + 21 * 9, 81, 21, 30), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
        {22, Rect(5 + 21 * 10, 81, 21, 30), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},

        {23, Rect(46, 115, 21, 30), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
        {24, Rect(46 + 21, 115, 21, 30), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
        {25, Rect(46 + 21 * 2, 115, 21, 30), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
        {26, Rect(46 + 21 * 3, 115, 21, 30), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
        {27, Rect(46 + 21 * 4, 115, 21, 30), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
        {28, Rect(46 + 21 * 5, 115, 21, 30), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
        {29, Rect(46 + 21 * 6, 115, 21, 30), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
        {30, Rect(46, 150, 188, 32), BITMAP_KEYBOARD_SPACE_HIGHLIGHTED_ID}};

/**
 * Callback areas for the special buttons on the CustomKeyboard.
 */
static Keyboard::CallbackArea callbackAreas[3] =
    {
        {Rect(5, 115, 41, 30), 0, BITMAP_KEYBOARD_KEY_SHIFT_HIGHLIGHTED_ID},    // caps-lock
        {Rect(195, 115, 41, 30), 0, BITMAP_KEYBOARD_KEY_DELETE_HIGHLIGHTED_ID}, // backspace
        {Rect(5, 150, 41, 30), 0, BITMAP_KEYBOARD_KEY_NUM_HIGHLIGHTED_ID},      // mode
};

/**
 * The layout for the CustomKeyboard.
 */
static const Keyboard::Layout layout =
    {
        BITMAP_KEYBOARD_BACKGROUND_ID,
        keyArray,
        30,
        callbackAreas,
        3,
        Rect(10, 8, 230, 38),
        TypedText(T_ENTEREDTEXT),
#if !defined(USE_BPP) || USE_BPP == 16
        0xFFFF,
#elif USE_BPP == 24
        0xFFFFFF,
#elif USE_BPP == 8
        0xFF,
#elif USE_BPP == 4
        0xF,
#elif USE_BPP == 2
        0x3,
#else
#error Unknown USE_BPP
#endif
        Typography::KEYBOARD,
        0};

#endif
