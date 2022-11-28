#pragma once

#include "veggies.h"

class BlackOlives : public Veggies {
public:
    virtual std::string to_string() override {
        return "Black Olives";
    }
};
