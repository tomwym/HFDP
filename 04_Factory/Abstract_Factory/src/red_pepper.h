#pragma once

#include "veggies.h"

class RedPepper : public Veggies {
public:
    virtual std::string to_string() override {
        return "Red Pepper";
    }
};
