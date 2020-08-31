#include <luminosity.h>
#include <provider.h>

namespace easee {

Luminosity::Luminosity(int port) : d_port(port) {}

Luminosity::~Luminosity() {}

Luminosity::LuminosityData Luminosity::getData() {
    LuminosityData data;
    data.luminosity = analogRead(d_port);

    return data;
}

void Luminosity::setup() {}

void Luminosity::loop(int t) {
    Provider<LuminosityData>::instance()->set(getData());
}

}  // namespace easee
