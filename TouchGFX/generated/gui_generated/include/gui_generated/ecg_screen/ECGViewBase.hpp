/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef ECGVIEWBASE_HPP
#define ECGVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/ecg_screen/ECGPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/graph/GraphScroll.hpp>
#include <touchgfx/widgets/graph/GraphElements.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/widgets/graph/GraphLabels.hpp>
#include <touchgfx/widgets/Button.hpp>

class ECGViewBase : public touchgfx::View<ECGPresenter>
{
public:
    ECGViewBase();
    virtual ~ECGViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image Home_Background;
    touchgfx::GraphScroll<100> ECGGraph;
    touchgfx::GraphElementLine ECGGraphLine1;
    touchgfx::PainterRGB565 ECGGraphLine1Painter;
    touchgfx::GraphElementGridX ECGGraphMinorXAxisGrid;
    touchgfx::GraphElementGridY ECGGraphMinorYAxisGrid;
    touchgfx::GraphElementGridX ECGGraphMajorXAxisGrid;
    touchgfx::GraphElementGridY ECGGraphMajorYAxisGrid;
    touchgfx::GraphLabelsY ECGGraphMajorYAxisLabel;
    touchgfx::Image image1;
    touchgfx::Button Retour;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<ECGViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 3600;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];
};

#endif // ECGVIEWBASE_HPP
