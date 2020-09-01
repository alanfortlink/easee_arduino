#ifndef EASEE_RECT_H
#define EASEE_RECT_H

#include <color.h>
#include <widget.h>

namespace easee {

class Rect : public Widget {
   public:
    Rect(int x, int y, int width, int height, Color bgColor = Color::BLACK);
    ~Rect();

    virtual void drawBackground(Display& display);
    virtual void drawForeground(Display& display);

   protected:
    Color d_bgColor;
};

}  // namespace easee

#endif
