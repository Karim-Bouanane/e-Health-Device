#ifndef SPO2PRESENTER_HPP
#define SPO2PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class SpO2View;

class SpO2Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    SpO2Presenter(SpO2View& v);

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

    virtual ~SpO2Presenter() {};

private:
    SpO2Presenter();

    SpO2View& view;
};

#endif // SPO2PRESENTER_HPP
