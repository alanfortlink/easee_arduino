#ifndef EASEE_LUMINOSITY_H
#define EASEE_LUMINOSITY_H

#include <Arduino.h>

namespace easee {

/**
 * @brief Wrapper over the luminosity sensor.
 */
class Luminosity {
   public:
    struct LuminosityData {
        float luminosity;
    };

    Luminosity(int port = A15);
    ~Luminosity();

    /**
     * @brief reads the luminosity from the sensor.
     *
     * @return current luminosity.
     */
    LuminosityData getData();

    /**
     * @brief Setup the luminosity sensor.
     */
    void setup();

    /**
     * @brief TODO.
     */
    void loop(int t);

   protected:
    int d_port;
};

}  // namespace easee

#endif
