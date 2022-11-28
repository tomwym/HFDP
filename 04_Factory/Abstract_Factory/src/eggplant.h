#pragma once

#include "veggies.h"

class Eggplant : public Veggies {
public:
    virtual std::string to_string() override {
        return "Eggplant";
    }
};
