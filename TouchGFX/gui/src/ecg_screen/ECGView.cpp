#include <gui/ecg_screen/ECGView.hpp>

ECGView::ECGView()
{

}

void ECGView::setupScreen()
{
    ECGViewBase::setupScreen();
}

void ECGView::tearDownScreen()
{
    ECGViewBase::tearDownScreen();
}

void ECGView::updateECGGraph(uint16_t value)
{
	ECGGraph.addDataPoint(value);
}
