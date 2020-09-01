#ifndef EASEE_GYRO_H
#define EASEE_GYRO_H

#include <Arduino.h>

namespace easee {

/**
 * @brief Wrapper over the gyroscope sensor.
 */
class Gyroscope {
   public:
    struct GyroscopeData {
        int acc_x;
        int acc_y;
        int acc_z;

        int temperature;

        int gyro_x;
        int gyro_y;
        int gyro_z;
    };

    Gyroscope(int scl = SCL, int sda = SDA);
    ~Gyroscope();

    /**
     * @brief reads the Gyroscope from the sensor.
     *
     * @return current Gyroscope Data.
     */
    GyroscopeData getData();

    /**
     * @brief Setup the gysroscope sensor.
     */
    void setup();

    /**
     * @brief TODO.
     */
    void loop(int t);

   protected:
    int d_scl;
    int d_sda;
};

}  // namespace easee

#endif
