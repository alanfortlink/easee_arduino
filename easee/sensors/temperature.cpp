#include <temperature.h>

namespace easee {

Temperature::Temperature(int port) : d_port(port), d_dht() {}

Temperature::~Temperature() {}

Temperature::TemperatureData Temperature::getData() {
    TemperatureData data;

    int chk = d_dht.read11(d_port);
    data.celsius = d_dht.temperature;
    data.humidity = d_dht.humidity;
    
    return data;
}

void Temperature::setup() {}

void Temperature::loop(int t) {}

}  // namespace easee
