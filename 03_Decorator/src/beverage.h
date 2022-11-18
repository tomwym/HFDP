#pragma once

#include <string>

class Beverage {
public:
    Beverage()
    : _description{"Unknown Beverage"}
    , _cost{0}
    {}

    Beverage(const std::string& description, const double& cost)
    : _description{description}
    , _cost{cost}
    {}

    virtual double cost() = 0;

    virtual std::string get_description() {
        return _description;
    }

protected:
    std::string _description;
    double _cost;
};