#ifndef EASEE_TEMPERATURE_CARD_H
#define EASEE_TEMPERATURE_CARD_H

#include <component.h>

namespace easee {

class TemperatureCard : public Component {
   public:
    TemperatureCard(int x, int y, int width, int height);
    virtual void draw(Display& display);
    virtual void loop(int t);
};

}  // namespace easee

#endif
