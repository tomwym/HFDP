#pragma once

#include "beverage.h"

class HouseBlend : public Beverage {
public:
    HouseBlend()
    : Beverage{"House Blend Coffee", 0.89}
    {}

    virtual double cost() override {
        return _cost;
    }
};