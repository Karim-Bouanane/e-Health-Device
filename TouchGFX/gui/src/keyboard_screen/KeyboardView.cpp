#include <gui/keyboard_screen/KeyboardView.hpp>

KeyboardView::KeyboardView()
{
    keyboard.setPosition(0, 59, 240, 184);
    add(keyboard);
}

void KeyboardView::setupScreen()
{
    KeyboardViewBase::setupScreen();
}

void KeyboardView::tearDownScreen()
{
    KeyboardViewBase::tearDownScreen();
}
