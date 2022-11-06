#pragma once

#include "quack_behavior.h"

#include <iostream>

class QuackSqueak : public QuackBehavior {
public:
    virtual void quack() override {
        std::cout << " squeak. " << '\n';
    }
};