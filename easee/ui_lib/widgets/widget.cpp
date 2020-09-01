#include <widget.h>

namespace easee {

Widget::Widget(int x, int y, int width, int height)
    : d_x(x), d_y(y), d_width(width), d_height(height), d_invalidated(true), d_isFirstTime(true) {}

void Widget::render(Display& display){
    if(invalidated()){
        d_invalidated = false;
        drawBackground(display);
    }

    drawForeground(display);
    d_isFirstTime = false;
}

Widget::~Widget() {}

}  // namespace easee
