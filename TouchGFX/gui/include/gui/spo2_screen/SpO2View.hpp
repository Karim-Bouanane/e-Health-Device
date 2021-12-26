#ifndef SPO2VIEW_HPP
#define SPO2VIEW_HPP

#include <gui_generated/spo2_screen/SpO2ViewBase.hpp>
#include <gui/spo2_screen/SpO2Presenter.hpp>

class SpO2View : public SpO2ViewBase
{
public:
    SpO2View();
    virtual ~SpO2View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SPO2VIEW_HPP
