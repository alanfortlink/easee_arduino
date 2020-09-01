#ifndef EASEE_WIDGET_H
#define EASEE_WIDGET_H

#include <display.h>

namespace easee {

class Widget {
   public:
    Widget(int x, int y, int width, int height);
    virtual ~Widget();

    void render(Display& display);

    virtual void drawBackground(Display& display) = 0;
    virtual void drawForeground(Display& display) = 0;

    virtual void loop(int t) {}

    void invalidate() { d_invalidated = true; }
    inline bool invalidated() { return d_invalidated; };

   protected:
    int d_x;
    int d_y;
    int d_width;
    int d_height;

    bool d_invalidated;
    bool d_isFirstTime;
};

}  // namespace easee

#endif
