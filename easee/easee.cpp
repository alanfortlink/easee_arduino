#include <Arduino.h>
#include <easee.h>

easee::Easee app;

void setup() { app.setup(); }

void loop() { app.loop(millis()); }

namespace easee {

Easee::Easee() : d_touchDisplay(), d_containerRect(nullptr), d_text(nullptr) {}

Easee::~Easee() {
    if (d_containerRect) delete d_containerRect;
    if (d_text) delete d_text;
}

void Easee::setup() {
    d_containerRect = new Rect(0, 0, 200, 200);
    d_text = new Text(50, 50, 150, 150, "Alan");

    d_touchDisplay.setup();
}

void Easee::loop(int t) {
    d_touchDisplay.loop(t);
    d_containerRect->render(d_touchDisplay);
    d_text->render(d_touchDisplay);
}

}  // namespace easee
