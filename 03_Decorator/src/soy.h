#pragma once

#include "condiments_decorator.h"

class Soy : public CondimentsDecorator {
public:
    Soy(std::shared_ptr<Beverage> beverage)
    : CondimentsDecorator{"Soy", 0.15, beverage}
    {}

};