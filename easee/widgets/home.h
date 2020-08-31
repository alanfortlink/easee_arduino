#ifndef EASEE_HOME_H
#define EASEE_HOME_H

#include <component.h>
#include <humidity_card.h>
#include <temperature_card.h>

namespace easee {

class Home : public Component {
   public:
    Home(int x, int y, int width, int height);
    virtual void draw(Display& display);
    virtual void loop(int t);

   protected:
    TemperatureCard d_temperatureCard;
    HumidityCard d_humidityCard;
};

}  // namespace easee

#endif
