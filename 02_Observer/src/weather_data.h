#pragma once

#include <set>
#include <iostream>
#include "subject.h"
#include "observer.h"

class WeatherData : public Subject {
public:
    WeatherData()
    : _observers{}
    , _temperature{0}
    , _humidity{0}
    , _pressure{0}
    {}

    virtual void register_observer(Observer* o) override {
        _observers.insert(o);
    }

    void remove_observer(Observer* o) {
        _observers.erase(o);
    }

    void notify_observers() {
        for (const auto p : _observers) {
            p->update(_temperature, _humidity, _pressure);
        }
    }

    void measurements_changed() {
        notify_observers();
    }

    void set_measurements(const float temperature, const float humidity, const float pressure) {
        _temperature = temperature;
        _humidity = humidity;
        _pressure = pressure;
        measurements_changed();
    }

private:
    std::set<Observer*> _observers;
    float _temperature;
    float _humidity;
    float _pressure;
};