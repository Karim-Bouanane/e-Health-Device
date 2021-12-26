#include <gui/ecg_screen/ECGView.hpp>
#include <gui/ecg_screen/ECGPresenter.hpp>

ECGPresenter::ECGPresenter(ECGView& v)
    : view(v)
{

}

void ECGPresenter::activate()
{

}

void ECGPresenter::deactivate()
{

}

void ECGPresenter::updateECGGraph(uint16_t value)
{
	view.updateECGGraph(value);
}
