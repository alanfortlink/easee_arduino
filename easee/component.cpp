#include "component.h"

namespace easee {

Component::Component(int x, int y, int width, int height)
    : d_x(x), d_y(y), d_width(width), d_height(height) {}

Component::~Component() {}

}  // namespace easee
