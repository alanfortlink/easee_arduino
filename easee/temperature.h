#ifndef EASEE_TEMPERATURE_H
#define EASEE_TEMPERATURE_H

#include <dht.h>

namespace easee {

/**
 * @brief Wrapper over the temperature sensor.
 */
class Temperature {
   public:
    struct TemperatureData {
        float celsius;
        float humidity;
    };

    Temperature(int port = 13);
    ~Temperature();

    /**
     * @brief reads the temperature from the sensor.
     *
     * @return current temperature in Celsius.
     */
    TemperatureData getData();

    /**
     * @brief Setup the temperature sensor.
     */
    void setup();

    /**
     * @brief TODO.
     */
    void loop(int t);

   protected:
    int d_port;
    dht d_dht;
};

}  // namespace easee

#endif
