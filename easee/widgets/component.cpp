#include <component.h>

namespace easee {

Component::Component(int x, int y, int width, int height)
    : d_x(x), d_y(y), d_width(width), d_height(height), d_invalidated(true), d_isFirstTime(true) {}

void Component::render(Display& display){
    if(invalidated()){
        d_invalidated = false;
        draw(display);
    }

    d_isFirstTime = false;
}

Component::~Component() {}

}  // namespace easee
