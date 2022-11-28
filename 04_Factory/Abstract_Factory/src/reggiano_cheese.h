#pragma once

#include "cheese.h"

class ReggianoCheese : public Cheese {
public:
    virtual std::string to_string() override {
        return "Reggiano Cheese";
    }
};
