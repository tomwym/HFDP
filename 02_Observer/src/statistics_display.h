#pragma once

#include <memory>
#include <iostream>

#include "observer.h"
#include "display_element.h"
#include "weather_data.h"

class StatisticsDisplay : public Observer, public DisplayElement {
public:

    StatisticsDisplay(std::shared_ptr<WeatherData> weatherdata)
    : _max_temperature{0}
    , _min_temperature{0}
    , _sum_temperature{0}
    , _n_readings{0}
    , _weatherdata{weatherdata}
    {
        _weatherdata->register_observer(this);
    }

    virtual void update(const float& temperature, const float& humidity, const float& pressure) override {
        _sum_temperature += temperature;
        ++_n_readings;

        _max_temperature = std::max(temperature, _max_temperature);
        _min_temperature = std::min(temperature, _min_temperature);

        display();
    }

    virtual void display() override {
        std::cout << "Avg/Max/Min temperature = " << _sum_temperature / _n_readings
            << "/" << _max_temperature
            << "/" << _min_temperature
            << '\n';
    }

private:
    float _max_temperature;
    float _min_temperature;
    float _sum_temperature;
    size_t _n_readings;
    std::shared_ptr<WeatherData> _weatherdata;
};