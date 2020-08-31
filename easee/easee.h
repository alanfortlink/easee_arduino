#ifndef EASEE_EASEE_H
#define EASEE_EASEE_H

#include <text.h>
#include <touch_display.h>
#include <temperature.h>
#include <luminosity.h>
#include <gyro.h>

namespace easee {

class Easee {
   public:
    void setup();
    void loop(int t);
    void updateSensors(int t);

    Easee();
    ~Easee();

   protected:
    TouchDisplay d_touchDisplay;
    Temperature d_temperature;
    Luminosity d_luminosity;
    Gyroscope d_gyroscope;

    Text* d_text;

    Luminosity::LuminosityData d_oldLuminosityData;
};

};  // namespace easee

#endif
