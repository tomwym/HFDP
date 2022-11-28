#pragma once

#include "veggies.h"

class Mushroom : public Veggies {
public:
    virtual std::string to_string() override {
        return "Mushroom";
    }
};
