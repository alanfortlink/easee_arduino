#include <card.h>

namespace {
const int PADDING = 5;
}  // namespace

namespace easee {

Card::Card(int x, int y, int width, int height)
    : Component(x, y, width, height) {}

void Card::draw(Display& display) {}

}  // namespace easee
