#pragma once

#include "veggies.h"

class Garlic : public Veggies {
public:
    virtual std::string to_string() override {
        return "Garlic";
    }
};
