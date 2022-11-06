#pragma once

#include "duck.h"

class DuckModel : public Duck {
public:
    DuckModel()
        : Duck(
            std::make_unique<FlyWithWings>(),
            std::make_unique<QuackNormally>())
    {}
};