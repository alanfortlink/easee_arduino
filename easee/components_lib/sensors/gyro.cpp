#include <Wire.h>
#include <gyro.h>

namespace {
const int MPU_ADDR = 0x68;
}

namespace easee {

Gyroscope::Gyroscope(int scl, int sda) : d_scl(scl), d_sda(sda) {}

Gyroscope::~Gyroscope() {}

Gyroscope::GyroscopeData Gyroscope::getData() {
    GyroscopeData data;

    //TODO: Clean and make sense of this
    Wire.beginTransmission(MPU_ADDR);
    Wire.write(
        0x3B);  // starting with register 0x3B (ACCEL_XOUT_H) [MPU-6000 and
                // MPU-6050 Register Map and Descriptions Revision 4.2, p.40]
    Wire.endTransmission(
        false);  // the parameter indicates that the Arduino will send a
                 // restart. As a result, the connection is kept active.
    Wire.requestFrom(MPU_ADDR, 7 * 2,
                     true);  // request a total of 7*2=14 registers

    // "Wire.read()<<8 | Wire.read();" means two registers are read and stored
    // in the same variable
    data.acc_x = Wire.read() << 8 |
                 Wire.read();  // reading registers: 0x3B (ACCEL_XOUT_H)
                               // and 0x3C (ACCEL_XOUT_L)
    data.acc_y = Wire.read() << 8 |
                 Wire.read();  // reading registers: 0x3D (ACCEL_YOUT_H)
                               // and 0x3E (ACCEL_YOUT_L)
    data.acc_z = Wire.read() << 8 |
                 Wire.read();  // reading registers: 0x3F (ACCEL_ZOUT_H)
                               // and 0x40 (ACCEL_ZOUT_L)
    data.temperature =
        Wire.read() << 8 | Wire.read();  // reading registers: 0x41 (TEMP_OUT_H)
                                         // and 0x42 (TEMP_OUT_L)
    data.gyro_x =
        Wire.read() << 8 | Wire.read();  // reading registers: 0x43
                                         // (GYRO_XOUT_H) and 0x44 (GYRO_XOUT_L)
    data.gyro_y =
        Wire.read() << 8 | Wire.read();  // reading registers: 0x45
                                         // (GYRO_YOUT_H) and 0x46 (GYRO_YOUT_L)
    data.gyro_z =
        Wire.read() << 8 | Wire.read();  // reading registers: 0x47
                                         // (GYRO_ZOUT_H) and 0x48 (GYRO_ZOUT_L)

    return data;
}

void Gyroscope::setup() {
    Wire.begin();
    Wire.beginTransmission(MPU_ADDR);
    Wire.write(0x6B);
    Wire.write(0);
    Wire.endTransmission(true);
}

void Gyroscope::loop(int t) {}

}  // namespace easee
