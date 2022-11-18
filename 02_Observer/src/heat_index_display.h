#pragma once

#include <memory>
#include <iostream>

#include "observer.h"
#include "display_element.h"
#include "weather_data.h"

class HeatIndexDisplay : public Observer, public DisplayElement {
public:

    HeatIndexDisplay(std::shared_ptr<WeatherData> weatherdata)
    : _heat_index{0}
    , _weatherdata{weatherdata}
    {
        _weatherdata->register_observer(this);
    }

    virtual void update(const float& temperature, const float& humidity, const float& pressure) override {
        _heat_index = compute_heat_index(temperature, humidity);

        display();
    }

    virtual void display() override {
        std::cout << "Heat index is " << _heat_index << '\n';
    }

    float compute_heat_index(const float t, const float rh) {
		return (float)((16.923 + (0.185212 * t) + (5.37941 * rh) - (0.100254 * t * rh)
			+ (0.00941695 * (t * t)) + (0.00728898 * (rh * rh))
			+ (0.000345372 * (t * t * rh)) - (0.000814971 * (t * rh * rh)) +
			(0.0000102102 * (t * t * rh * rh)) - (0.000038646 * (t * t * t)) + (0.0000291583 *
			(rh * rh * rh)) + (0.00000142721 * (t * t * t * rh)) +
			(0.000000197483 * (t * rh * rh * rh)) - (0.0000000218429 * (t * t * t * rh * rh)) +
			0.000000000843296 * (t * t * rh * rh * rh)) -
			(0.0000000000481975 * (t * t * t * rh * rh * rh)));
    }
    
private:
    float _heat_index;
    std::shared_ptr<WeatherData> _weatherdata;
};