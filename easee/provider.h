#ifndef EASEE_PROVIDER_H
#define EASEE_PROVIDER_H

#include <luminosity.h>
#include <temperature.h>

namespace easee {

template <class T>
class Provider {
   public:
    static Provider* instance() {
        if (!d_instance) {
            d_instance = new Provider<T>();
        }
        return d_instance;
    }

    inline const T& get() { return d_data; }
    void set(const T& data) { d_data = data; }

   private:
    Provider<T>() : d_data() {}
    ~Provider<T>() {}
    T d_data;

    static Provider<T>* d_instance;
};

template<class T>
Provider<T>* Provider<T>::d_instance = nullptr;

// class Provider {
//    public:
//     inline Temperature::TemperatureData getTemperatureData() {
//         return d_temperatureData;
//     }
// 
//     void setTemperatureData(Temperature::TemperatureData temperatureData);
// 
//     inline Luminosity::LuminosityData getLuminosityData() {
//         return d_luminosityData;
//     }
// 
//     void setLuminosityData(Luminosity::LuminosityData luminosityData);
// 
//     static Provider* instance();
// 
//    private:
//     static Provider* d_instance;
// 
//     Temperature::TemperatureData d_temperatureData;
//     Luminosity::LuminosityData d_luminosityData;
// 
//     Provider();
//     ~Provider();
// };

};  // namespace easee

#endif
