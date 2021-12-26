#include <gui/temperature_screen/TemperatureView.hpp>
#include <string.h>
#include "main.h"

TemperatureView::TemperatureView()
{

}

void TemperatureView::setupScreen()
{
	TemperatureViewBase::setupScreen();
}

void TemperatureView::tearDownScreen()
{
    TemperatureViewBase::tearDownScreen();
}

void TemperatureView::updateTemp(float value)
{

	memset(&Text_TempValueBuffer, 0, TEXT_TEMPVALUE_SIZE*sizeof(char));

	Unicode::snprintfFloat(Text_TempValueBuffer, TEXT_TEMPVALUE_SIZE, "%f", value);
	Text_TempValue.resizeToCurrentText();


    Unicode::strncpy(Text_EtatBuffer, "normal", TEXT_ETAT_SIZE);
    Text_Etat.resizeToCurrentText();

	invalidate();

}
