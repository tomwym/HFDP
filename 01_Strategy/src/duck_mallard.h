#pragma once

#include "duck.h"

class DuckMallard : public Duck {
public:
    DuckMallard()
        : Duck(
            std::make_unique<FlyWithWings>(),
            std::make_unique<QuackNormally>())
    {}
};