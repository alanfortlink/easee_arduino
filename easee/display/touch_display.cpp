#include <touch_display.h>

namespace easee {

TouchDisplay::TouchDisplay() : d_display(0, A2, A1, A3, A4, A0) {}

TouchDisplay::~TouchDisplay() {}

void TouchDisplay::setup() { d_display.InitLCD(); }

void TouchDisplay::loop(int t) {}

void TouchDisplay::fillRect(int x, int y, int w, int h, const Color& color) {
    d_display.setColor(color.r(), color.g(), color.b());
    d_display.fillRect(x, y, w, h);
}

}  // namespace easee
