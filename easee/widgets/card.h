#ifndef EASEE_CARD_H
#define EASEE_CARD_H

#include <component.h>

namespace easee {

class Card : Component {
   public:
    Card(int x, int y, int width, int height);

    virtual void draw(Display& display);
};

}  // namespace easee

#endif
