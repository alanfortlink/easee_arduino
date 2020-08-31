#include <Arduino.h>
#include <easee.h>
#include <provider.h>

easee::Easee app;

void setup() { app.setup(); }

void loop() { app.loop(millis()); }

namespace easee {

Easee::Easee()
    : d_touchDisplay(), d_temperature(), d_luminosity(), d_gyroscope(), d_home(nullptr) {}

Easee::~Easee() {
    if(d_home) delete d_home;
}

void Easee::setup() {
    d_touchDisplay.setup();
    d_temperature.setup();
    d_luminosity.setup();
    d_gyroscope.setup();

    d_home = new Home(0, 0, TouchDisplay::WIDTH, TouchDisplay::HEIGHT);
}

void Easee::loop(int t) {
    d_temperature.loop(t);
    d_luminosity.loop(t);
    d_touchDisplay.loop(t);

    d_home->loop(t);
    d_home->render(d_touchDisplay);
}

}  // namespace easee
