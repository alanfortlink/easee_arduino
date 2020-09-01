#ifndef EASEE_HOME_H
#define EASEE_HOME_H

#include <widget.h>
#include <humidity_card.h>
#include <temperature_card.h>
#include <luminosity_card.h>

namespace easee {

class Home : public Widget {
   public:
    Home(int x, int y, int width, int height);
    virtual void drawBackground(Display& display);
    virtual void drawForeground(Display& display);
    virtual void loop(int t);

   protected:
    TemperatureCard d_temperatureCard;
    HumidityCard d_humidityCard;
    LuminosityCard d_luminosityCard;
};

}  // namespace easee

#endif
