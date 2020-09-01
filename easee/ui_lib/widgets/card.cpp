#include <card.h>

namespace {
const int PADDING = 5;
}  // namespace

namespace easee {

Card::Card(int x, int y, int width, int height)
    : Widget(x, y, width, height) {}

void Card::drawBackground(Display& display) {}
void Card::drawForeground(Display& display) {}

}  // namespace easee
