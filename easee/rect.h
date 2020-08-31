#ifndef EASEE_RECT_H
#define EASEE_RECT_H

#include "color.h"
#include "component.h"

namespace easee {

class Rect : public Component {
   public:
    Rect(int x, int y, int width, int height, Color bgColor = Color::BLACK);
    ~Rect();

    virtual void render(Display& display);

   protected:
    Color d_bgColor;
};

}  // namespace easee

#endif
