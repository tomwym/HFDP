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

    virtual double cost() = 0;

    virtual std::string get_description() = 0;

protected:
    std::shared_ptr<Beverage> _beverage;
};