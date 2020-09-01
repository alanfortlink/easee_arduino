#include <rect.h>

namespace easee {

Rect::Rect(int x, int y, int width, int height, Color bgColor)
    : Widget(x, y, width, height), d_bgColor(bgColor) {}

Rect::~Rect() {}

void Rect::drawBackground(Display& display) {
    display.fillRect(d_x, d_y, d_width, d_height, d_bgColor);
}

void Rect::drawForeground(Display& display) {
}

}  // namespace easee
