#pragma once

#include "quack_behavior.h"

#include <iostream>

class QuackNormally : public QuackBehavior {
public:
    virtual void quack() override {
        std::cout << " quack. " << '\n';
    }
};