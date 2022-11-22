#pragma once

#include "condiments_decorator.h"

class SteamedMilk : public CondimentsDecorator {
public:
    SteamedMilk(std::shared_ptr<Beverage> beverage)
    : CondimentsDecorator{"SteamedMilk", 0.10, beverage}
    {}

    virtual double cost() override {
        return _beverage->cost() + _cost;
    }

    virtual std::string get_description() override {
        return _beverage->get_description() + ", " + _description;
    }
    
};