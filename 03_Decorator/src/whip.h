#pragma once

#include "condiments_decorator.h"

class Whip : public CondimentsDecorator {
public:
    Whip(std::shared_ptr<Beverage> beverage)
    : CondimentsDecorator{"Whip", 0.10, beverage}
    {}

    virtual double cost() override {
        return _beverage->cost() + _cost;
    }

    virtual std::string get_description() override {
        return _beverage->get_description() + ", " + _description;
    }
    
};