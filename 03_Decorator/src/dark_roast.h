#pragma once

#include "beverage.h"

class DarkRoast : public Beverage {
public:
    DarkRoast()
    : Beverage{"DarkRoast", 0.99}
    {}

    virtual double cost() override {
        return _cost;
    }
};