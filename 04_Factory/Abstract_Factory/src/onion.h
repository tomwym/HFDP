#pragma once

#include "veggies.h"

class Onion : public Veggies {
public:
    virtual std::string to_string() override {
        return "Onion";
    }
};
