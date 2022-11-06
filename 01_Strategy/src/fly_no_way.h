#pragma once

#include "fly_behavior.h"

#include <iostream>

class FlyNoWay : public FlyBehavior {
public:
    virtual void fly() override {
        std::cout << " I can't fly! " << '\n';
    }
};