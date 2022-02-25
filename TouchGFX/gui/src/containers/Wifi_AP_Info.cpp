#include <gui/containers/Wifi_AP_Info.hpp>


Wifi_AP_Info::Wifi_AP_Info()
{

}

void Wifi_AP_Info::setupListElement(const char* ssid, const char* signalQuality)
{

    Unicode::strncpy(SSIDBuffer, ssid, SSID_SIZE);
    SSID.resizeToCurrentText();

    Unicode::strncpy(StrengthBuffer, signalQuality, STRENGTH_SIZE);
    Strength.resizeToCurrentText();

    invalidate();
}
