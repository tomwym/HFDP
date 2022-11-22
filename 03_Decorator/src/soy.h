#pragma once

#include "condiments_decorator.h"

class Soy : public CondimentsDecorator {
public:
    Soy(std::shared_ptr<Beverage> beverage)
    : CondimentsDecorator{"Soy", 0.15, beverage}
    {}

    virtual double cost() override {
        return _beverage->cost() + _cost;
    }

    virtual std::string get_description() override {
        return _beverage->get_description() + ", " + _description;
    }
    
};