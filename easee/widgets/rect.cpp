#include <rect.h>

namespace easee {

Rect::Rect(int x, int y, int width, int height, Color bgColor)
    : Component(x, y, width, height), d_bgColor(bgColor) {}

Rect::~Rect() {}

void Rect::draw(Display& display) {
    display.fillRect(d_x, d_y, d_width, d_height, d_bgColor);
}

}  // namespace easee
