/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/startup_screen/StartupViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"

StartupViewBase::StartupViewBase() :
    startup_ShowTimeCounter(0)
{

    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    Startup_Background.setXY(0, 0);
    Startup_Background.setBitmap(touchgfx::Bitmap(BITMAP_STARTUP_ID));

    add(__background);
    add(Startup_Background);
}

void StartupViewBase::setupScreen()
{

    //Startup_ShowTime
    //When screen transition begins delay
    //Delay for 5000 ms (300 Ticks)
    startup_ShowTimeCounter = STARTUP_SHOWTIME_DURATION;

}

//Handles delays
void StartupViewBase::handleTickEvent()
{
    if(startup_ShowTimeCounter > 0)
    {
        startup_ShowTimeCounter--;
        if(startup_ShowTimeCounter == 0)
        {
            //Startup_Transition
            //When Startup_ShowTime completed change screen to Home
            //Go to Home with screen transition towards East
            application().gotoHomeScreenCoverTransitionEast();
        }
    }
}
