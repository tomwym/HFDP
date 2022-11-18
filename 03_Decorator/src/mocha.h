#pragma once

#include "condiments_decorator.h"

class Mocha : public CondimentsDecorator {
public:
    Mocha(std::shared_ptr<Beverage> beverage)
    : CondimentsDecorator{"Mocha", 0.20, beverage}
    {}

};