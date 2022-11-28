#pragma once

#include "pepperoni.h"

class SlicedPepperoni : public Pepperoni {
public:
    virtual std::string to_string() override {
        return "Sliced Pepperoni";
    }
};
