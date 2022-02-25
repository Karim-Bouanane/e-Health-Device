#ifndef PARAMETRESVIEW_HPP
#define PARAMETRESVIEW_HPP

#include <gui_generated/parametres_screen/ParametresViewBase.hpp>
#include <gui/parametres_screen/ParametresPresenter.hpp>
#include <gui/containers/Wifi_AP_Info.hpp>

class ParametresView : public ParametresViewBase
{
public:
    ParametresView();
    virtual ~ParametresView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
    static const int sizeWifiList = 15;
    Wifi_AP_Info listElements[sizeWifiList];

    char* wifiSignal[4] ={"bad signal","good signal","very good signal","excelent signal"};
};

#endif // PARAMETRESVIEW_HPP
