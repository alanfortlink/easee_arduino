#include "easee.h"

namespace easee {

Easee::Easee() : d_lcdDisplay(), d_temperature() {}

Easee::~Easee() {}

void Easee::setup() {
    d_lcdDisplay.setup();
    d_temperature.setup();

    d_lcdDisplay.setText("Natanael", "Ramos");
}

void Easee::loop(int t) {
    d_lcdDisplay.loop(t);
    d_temperature.loop(t);

    updateTemperature();
}

void Easee::updateTemperature() {
    Temperature::TemperatureData data = d_temperature.getData();

    String celsius = "Temp.: ";
    celsius += data.celsius;

    String humidity = "Humid.: ";
    humidity += data.humidity;

    d_lcdDisplay.setText(celsius, humidity);
}

}  // namespace easee
