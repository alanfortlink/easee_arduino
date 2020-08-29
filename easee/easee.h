#ifndef EASEE_EASEE_H
#define EASEE_EASEE_H

#include "lcd_display.h"

namespace easee {

class Easee {
   public:
    void setup();
    void loop(int t);

    Easee();
    ~Easee();

   protected:
    LCDDisplay* d_lcdDisplay_p;
};

};  // namespace easee

#endif
