#ifndef CONSULTATIONVIEW_HPP
#define CONSULTATIONVIEW_HPP

#include <gui_generated/consultation_screen/ConsultationViewBase.hpp>
#include <gui/consultation_screen/ConsultationPresenter.hpp>

class ConsultationView : public ConsultationViewBase
{
public:
    ConsultationView();
    virtual ~ConsultationView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // CONSULTATIONVIEW_HPP
