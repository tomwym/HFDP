#pragma once

#include <memory>
#include <iostream>

#include "observer.h"
#include "display_element.h"
#include "weather_data.h"

class CurrentConditionsDisplay : public Observer, public DisplayElement {
public:

    CurrentConditionsDisplay(std::shared_ptr<WeatherData> weatherdata)
    : _temperature{0}
    , _humidity{0}
    , _weatherdata{weatherdata}
    {
        _weatherdata->register_observer(this);
    }

    virtual void update(const float& temperature, const float& humidity, const float& pressure) override {
        _temperature = temperature;
        _humidity = humidity;
        display();
    }

    virtual void display() override {
        std::cout << "Current conditions: " << _temperature << "F degrees and " << _humidity << "% humidity" << '\n';
    }

private:
    float _temperature;
    float _humidity;
    std::shared_ptr<WeatherData> _weatherdata;
};