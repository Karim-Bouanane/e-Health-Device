#ifndef CONSULTATIONPRESENTER_HPP
#define CONSULTATIONPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ConsultationView;

class ConsultationPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ConsultationPresenter(ConsultationView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~ConsultationPresenter() {};

private:
    ConsultationPresenter();

    ConsultationView& view;
};

#endif // CONSULTATIONPRESENTER_HPP
