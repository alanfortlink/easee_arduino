#ifndef EASEE_LUMINOSITY_CARD_H
#define EASEE_LUMINOSITY_CARD_H

#include <component.h>

namespace easee {

class LuminosityCard : public Component {
   public:
    LuminosityCard(int x, int y, int width, int height);
    virtual void draw(Display& display);
    virtual void loop(int t);
};

}  // namespace easee

#endif
