#pragma once

#include <memory>

#include "beverage.h"

class CondimentsDecorator : public Beverage {
public:
    CondimentsDecorator(
        const std::string description,
        const double& cost,
        std::shared_ptr<Beverage> beverage)
    : Beverage{description, cost}
    , _beverage{beverage}
    {}

    virtual double cost() {
        return _beverage->cost() + _cost;
    }

    virtual std::string get_description() override {
        return _beverage->get_description() + ", " + _description;
    }

protected:
    std::shared_ptr<Beverage> _beverage;
};