#pragma once

#include "fly_behavior.h"

#include <iostream>

class FlyWithWings : public FlyBehavior {
public:
    virtual void fly() override {
        std::cout << " I am flying! " << '\n';
    }
};