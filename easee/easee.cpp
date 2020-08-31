#include <Arduino.h>
#include <easee.h>
#include <provider.h>

easee::Easee app;

void setup() { app.setup(); }

void loop() { app.loop(millis()); }

namespace easee {

Easee::Easee()
    : d_touchDisplay(), d_temperature(), d_luminosity(), d_gyroscope() {}

Easee::~Easee() {}

void Easee::setup() {
    d_touchDisplay.setup();
    d_temperature.setup();
    d_luminosity.setup();
    d_gyroscope.setup();
}

void Easee::loop(int t) {
    d_temperature.loop(t);
    d_luminosity.loop(t);
    d_touchDisplay.loop(t);

    String output;
    output += "Temp ";
    output += Provider<Temperature::TemperatureData>::instance()->get().celsius;
    Text(50, 50, 100, 100, output).render(d_touchDisplay);
}

}  // namespace easee
