#pragma once

#include "condiments_decorator.h"

class SteamedMilk : public CondimentsDecorator {
public:
    SteamedMilk(std::shared_ptr<Beverage> beverage)
    : CondimentsDecorator{"SteamedMilk", 0.10, beverage}
    {}

};