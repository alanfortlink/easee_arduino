#ifndef EASEE_EASEE_H
#define EASEE_EASEE_H

#include "lcd_display.h"
#include "temperature.h"

namespace easee {

class Easee {
   public:
    void setup();
    void loop(int t);

    Easee();
    ~Easee();

   protected:
    LCDDisplay d_lcdDisplay;
    Temperature d_temperature;

   private:
    void updateTemperature();
};

};  // namespace easee

#endif
