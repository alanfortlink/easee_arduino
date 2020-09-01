#ifndef EASEE_CARD_H
#define EASEE_CARD_H

#include <widget.h>

namespace easee {

class Card : public Widget {
   public:
    Card(int x, int y, int width, int height);

    virtual void drawBackground(Display& display);
    virtual void drawForeground(Display& display);
};

}  // namespace easee

#endif
