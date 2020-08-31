#include <Arduino.h>
#include <easee.h>

easee::Easee app;

void setup() { app.setup(); }

void loop() { app.loop(millis()); }

namespace easee {

Easee::Easee() : d_touchDisplay(), d_temperature(), d_text(nullptr) {}

Easee::~Easee() {
    if (d_text) delete d_text;
}

void Easee::setup() {
    d_text = new Text(0, 0, 480, 100, "Alan Martins Silva",
                      TextStyle(3, Color::BLACK, Color::WHITE));

    d_touchDisplay.setup();
    d_temperature.setup();
}

void Easee::updateInfo(int t){
    Temperature::TemperatureData data = d_temperature.getData();
    String celsius = "Temp.: ";
    celsius += data.celsius;

    String humidity = "Humid.: ";
    humidity += data.humidity;

    String output;
    output += celsius;
    output += "\n";
    output += humidity;

    d_text->setText(output);
}

void Easee::loop(int t) {
    updateInfo(t);

    d_touchDisplay.loop(t);
    d_text->render(d_touchDisplay);
}

}  // namespace easee
