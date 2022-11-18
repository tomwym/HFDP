#pragma once

#include "beverage.h"

class Espresso : public Beverage {
public:
    Espresso()
    : Beverage{"Espresso", 1.99}
    {}

    virtual double cost() override {
        return _cost;
    }
};