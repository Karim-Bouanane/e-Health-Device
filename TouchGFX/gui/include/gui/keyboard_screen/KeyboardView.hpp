#ifndef KEYBOARDVIEW_HPP
#define KEYBOARDVIEW_HPP

#include <gui_generated/keyboard_screen/KeyboardViewBase.hpp>
#include <gui/keyboard_screen/KeyboardPresenter.hpp>
#include <gui/common/CustomKeyboard.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>

class KeyboardView : public KeyboardViewBase
{
public:
    KeyboardView();
    virtual ~KeyboardView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

protected:
    CustomKeyboard keyboard;
};

#endif // KEYBOARDVIEW_HPP