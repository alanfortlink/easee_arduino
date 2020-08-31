#ifndef EASEE_EASEE_H
#define EASEE_EASEE_H

#include "touch_display.h"
#include "rect.h"

namespace easee {

class Easee {
   public:
    void setup();
    void loop(int t);

    Easee();
    ~Easee();

   protected:
    TouchDisplay d_touchDisplay;
    Rect* d_containerRect;
};

};  // namespace easee

#endif
