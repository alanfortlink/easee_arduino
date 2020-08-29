#ifndef EASEE_LCD_DISPLAY_H
#define EASEE_LCD_DISPLAY_H

#include <LiquidCrystal.h>

namespace easee {

class LCDDisplay {
   public:
    void setup();
    void loop(int t);
};

}  // namespace easee

#endif
