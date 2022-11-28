#pragma once

#include "veggies.h"

class Spinach : public Veggies {
public:
    virtual std::string to_string() override {
        return "Spinach";
    }
};
