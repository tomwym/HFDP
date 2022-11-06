#pragma once

#include "quack_behavior.h"

#include <iostream>

class QuackMute : public QuackBehavior {
public:
    virtual void quack() override {
        std::cout << " << silence >> " << '\n';
    }
};