#pragma once

#include "fly_behavior.h"

#include <iostream>

class FlyRocketPowered : public FlyBehavior {
public:
    virtual void fly() override {
        std::cout << " I am flying with a rocket! " << '\n';
    }
};