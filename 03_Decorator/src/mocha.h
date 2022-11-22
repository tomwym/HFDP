#pragma once

#include "condiments_decorator.h"

class Mocha : public CondimentsDecorator {
public:
    Mocha(std::shared_ptr<Beverage> beverage)
    : CondimentsDecorator{"Mocha", 0.20, beverage}
    {}

    virtual double cost() override {
        return _beverage->cost() + _cost;
    }

    virtual std::string get_description() override {
        return _beverage->get_description() + ", " + _description;
    }

};