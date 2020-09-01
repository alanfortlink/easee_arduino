#include <Arduino.h>
#include <easee.h>
#include <provider.h>

easee::Easee app;

namespace {
    int st = -1;
    int c = 0;
    int lc = 0;
}

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

    String output;
    output += c;
    Text(20, 400, 400, 400, output, TextStyle(5, Color::WHITE, Color::BLACK)).render(d_touchDisplay);
    c += 1;
    if(t - st > 1000) { st = t; lc = c; c = 0; }
}

}  // namespace easee
