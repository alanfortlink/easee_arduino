#ifndef EASEE_HUMIDITY_CARD_H
#define EASEE_HUMIDITY_CARD_H

#include <component.h>

namespace easee {

class HumidityCard : public Component {
   public:
    HumidityCard(int x, int y, int width, int height);
    virtual void draw(Display& display);
    virtual void loop(int t);
};

}  // namespace easee

#endif
