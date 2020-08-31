#include <touch_display.h>

namespace easee {

int TouchDisplay::WIDTH = 320;
int TouchDisplay::HEIGHT = 480;

TouchDisplay::TouchDisplay() : d_display(0, A2, A1, A3, A4, A0) {}

TouchDisplay::~TouchDisplay() {}

void TouchDisplay::setup() { d_display.InitLCD(PORTRAIT); }

void TouchDisplay::loop(int t) {}

void TouchDisplay::fillRect(int x, int y, int w, int h, const Color& color) {
    d_display.setColor(color.r(), color.g(), color.b());
    d_display.fillRect(x, y, x + w, y + h);
}

void TouchDisplay::drawText(const String& text, int x, int y,
                            const TextStyle& style) {
    d_display.setColor(style.color().r(), style.color().g(), style.color().b());
    d_display.setBackColor(style.bgColor().r(), style.bgColor().g(),
                           style.bgColor().b());
    d_display.setTextSize(style.fontSize());
    d_display.print(text, x, y);
}

}  // namespace easee
