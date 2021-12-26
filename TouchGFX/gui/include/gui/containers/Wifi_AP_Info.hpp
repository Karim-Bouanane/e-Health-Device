#ifndef WIFI_AP_INFO_HPP
#define WIFI_AP_INFO_HPP

#include <gui_generated/containers/Wifi_AP_InfoBase.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <texts/TextKeysAndLanguages.hpp>

class Wifi_AP_Info : public Wifi_AP_InfoBase
{
public:
    Wifi_AP_Info();
    virtual ~Wifi_AP_Info() {}

    void setupListElement(const char* ssid, const char* signalQuality);
protected:
};

#endif // WIFI_AP_INFO_HPP
