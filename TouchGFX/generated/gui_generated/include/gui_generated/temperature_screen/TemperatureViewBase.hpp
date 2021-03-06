/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef TEMPERATUREVIEWBASE_HPP
#define TEMPERATUREVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/temperature_screen/TemperaturePresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

class TemperatureViewBase : public touchgfx::View<TemperaturePresenter>
{
public:
    TemperatureViewBase();
    virtual ~TemperatureViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image Home_Background;
    touchgfx::Image Gauge;
    touchgfx::Button Retour;
    touchgfx::TextAreaWithOneWildcard Text_TempValue;
    touchgfx::TextAreaWithOneWildcard Text_Etat;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXT_TEMPVALUE_SIZE = 5;
    touchgfx::Unicode::UnicodeChar Text_TempValueBuffer[TEXT_TEMPVALUE_SIZE];
    static const uint16_t TEXT_ETAT_SIZE = 10;
    touchgfx::Unicode::UnicodeChar Text_EtatBuffer[TEXT_ETAT_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<TemperatureViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // TEMPERATUREVIEWBASE_HPP
