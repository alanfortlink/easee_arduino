#ifndef EASEE_HUMIDITY_CARD_H
#define EASEE_HUMIDITY_CARD_H

#include <widget.h>
#include <rect.h>
#include <text.h>

namespace easee {

class HumidityCard : public Widget {
   public:
    HumidityCard(int x, int y, int width, int height);
    virtual void drawBackground(Display& display);
    virtual void drawForeground(Display& display);
    virtual void loop(int t);

   protected:
};

}  // namespace easee

#endif
