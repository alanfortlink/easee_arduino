#ifndef EASEE_COMPONENT_H
#define EASEE_COMPONENT_H

#include <display.h>

namespace easee {

class Component {
   public:
    Component(int x, int y, int width, int height);
    virtual ~Component();

    void render(Display& display);

    virtual void draw(Display& display) = 0;
    void invalidate() { d_invalidated = true; }
    inline bool invalidated() { return d_invalidated; };

   protected:
    int d_x;
    int d_y;
    int d_width;
    int d_height;

    bool d_invalidated;
};

}  // namespace easee

#endif
