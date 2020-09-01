#ifndef EASEE_TEMPERATURE_CARD_H
#define EASEE_TEMPERATURE_CARD_H

#include <widget.h>

namespace easee {

class TemperatureCard : public Widget {
   public:
    TemperatureCard(int x, int y, int width, int height);
    virtual void drawBackground(Display& display);
    virtual void drawForeground(Display& display);
    virtual void loop(int t);
};

}  // namespace easee

#endif
