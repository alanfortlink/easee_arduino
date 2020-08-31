#ifndef EASEE_TEMPERATURE_H
#define EASEE_TEMPERATURE_H

namespace easee {

/**
 * @brief Wrapper over the temperature sensor.
 */
class Temperature {
    public:
        Temperature();
        ~Temperature();

        /**
         * @brief reads the temperature from the sensor.
         *
         * @return current temperature in Celsius.
         */
        float getCelsius();
};

}  // namespace easee

#endif
