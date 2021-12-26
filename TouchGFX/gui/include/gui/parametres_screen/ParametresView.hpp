#ifndef PARAMETRESVIEW_HPP
#define PARAMETRESVIEW_HPP

#include <gui_generated/parametres_screen/ParametresViewBase.hpp>
#include <gui/parametres_screen/ParametresPresenter.hpp>
#include <gui/containers/Wifi_AP_Info.hpp>
#include <vector>

#define BAD_SIGNAL 0
#define GOOD_SIGNAL 1
#define VERY_GOOD_SIGNAL 2
#define EXCELENT_SIGNAL 3

class ParametresView : public ParametresViewBase
{
public:
    ParametresView();
    virtual ~ParametresView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
    static const int numberOfListElements = 7;
    Wifi_AP_Info listElements[numberOfListElements];

    char* wifiSignal[4] ={"mauvais signal","bon signal","tres bon signal","excelent signal"};
};

#endif // PARAMETRESVIEW_HPP
