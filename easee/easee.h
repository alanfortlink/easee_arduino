#ifndef EASEE_EASEE_H
#define EASEE_EASEE_H

#include <text.h>
#include <touch_display.h>
#include <temperature.h>

namespace easee {

class Easee {
   public:
    void setup();
    void loop(int t);
    void updateInfo(int t);

    Easee();
    ~Easee();

   protected:
    TouchDisplay d_touchDisplay;
    Temperature d_temperature;
    Text* d_text;
};

};  // namespace easee

#endif
