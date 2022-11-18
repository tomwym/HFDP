#pragma once

#include "beverage.h"

class Decaf : public Beverage {
public:
    Decaf()
    : Beverage{"Decaf", 1.05}
    {}

    virtual double cost() override {
        return _cost;
    }
};