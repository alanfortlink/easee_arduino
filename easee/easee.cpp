#include <easee.h>
#include <Arduino.h>

easee::Easee app;

void setup(){
    app.setup();
}

void loop(){
    app.loop(millis());
}

namespace easee {

// Easee::Easee() : d_touchDisplay(), d_containerRect(nullptr) {}
Easee::Easee() {}

Easee::~Easee() {
    // if (d_containerRect) delete d_containerRect;
}

void Easee::setup() {
    // d_containerRect = new Rect(0, 0, 200, 200);

    // d_touchDisplay.setup();
}

void Easee::loop(int t) {
    // d_touchDisplay.loop(t);
    // d_containerRect->render(d_touchDisplay);
}

}  // namespace easee
