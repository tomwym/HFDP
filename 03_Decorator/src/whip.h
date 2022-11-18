#pragma once

#include "condiments_decorator.h"

class Whip : public CondimentsDecorator {
public:
    Whip(std::shared_ptr<Beverage> beverage)
    : CondimentsDecorator{"Whip", 0.10, beverage}
    {}

};