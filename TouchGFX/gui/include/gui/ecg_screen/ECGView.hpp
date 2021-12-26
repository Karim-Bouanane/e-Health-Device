#ifndef ECGVIEW_HPP
#define ECGVIEW_HPP

#include <gui_generated/ecg_screen/ECGViewBase.hpp>
#include <gui/ecg_screen/ECGPresenter.hpp>

class ECGView : public ECGViewBase
{
public:
    ECGView();
    virtual ~ECGView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void updateECGGraph(uint16_t value);
protected:
};

#endif // ECGVIEW_HPP
