/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef WIFI_AP_INFOBASE_HPP
#define WIFI_AP_INFOBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/Button.hpp>

class Wifi_AP_InfoBase : public touchgfx::Container
{
public:
    Wifi_AP_InfoBase();
    virtual ~Wifi_AP_InfoBase() {}
    virtual void initialize();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::TextAreaWithOneWildcard SSID;
    touchgfx::TextAreaWithOneWildcard Strength;
    touchgfx::Button Connexion;

    /*
     * Wildcard Buffers
     */
    static const uint16_t SSID_SIZE = 30;
    touchgfx::Unicode::UnicodeChar SSIDBuffer[SSID_SIZE];
    static const uint16_t STRENGTH_SIZE = 10;
    touchgfx::Unicode::UnicodeChar StrengthBuffer[STRENGTH_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Wifi_AP_InfoBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // WIFI_AP_INFOBASE_HPP
