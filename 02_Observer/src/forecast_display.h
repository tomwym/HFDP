#pragma once

#include <memory>
#include <iostream>

#include "observer.h"
#include "display_element.h"
#include "weather_data.h"

class ForecastDisplay : public Observer, public DisplayElement {
public:

    ForecastDisplay(std::shared_ptr<WeatherData> weatherdata)
    : _current_pressure{29.92}
    , _previous_pressure{0}
    , _weatherdata{weatherdata}
    {
        _weatherdata->register_observer(this);
    }

    virtual void update(const float& temperature, const float& humidity, const float& pressure) override {
        _previous_pressure = _current_pressure;
        _current_pressure = pressure;

        display();
    }

    virtual void display() override {
        std::cout << "Forecast: ";
        if (_current_pressure > _previous_pressure) {
            std::cout << "Improving weather on the way!";
        } else if (_current_pressure == _previous_pressure) {
            std::cout << "More of the same";
        } else if (_current_pressure < _previous_pressure) {
            std::cout << "Watch out for cooler, rainy weather";

        }
        std::cout << '\n';
    }

private:
    float _current_pressure;
    float _previous_pressure;
    std::shared_ptr<WeatherData> _weatherdata;
};