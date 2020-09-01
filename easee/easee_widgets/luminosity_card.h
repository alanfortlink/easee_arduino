#ifndef EASEE_LUMINOSITY_CARD_H
#define EASEE_LUMINOSITY_CARD_H

#include <widget.h>

namespace easee {

class LuminosityCard : public Widget {
   public:
    LuminosityCard(int x, int y, int width, int height);
    virtual void drawBackground(Display& display);
    virtual void drawForeground(Display& display);
    virtual void loop(int t);
};

}  // namespace easee

#endif
