#ifndef EASEE_COMPONENT_H
#define EASEE_COMPONENT_H

#include "../display/display.h"

namespace easee {

class Component {
   public:
    Component(int x, int y, int width, int height);
    virtual ~Component();

    virtual void render(Display& display) = 0;

   protected:
    int d_x;
    int d_y;
    int d_width;
    int d_height;
};

}  // namespace easee

#endif
