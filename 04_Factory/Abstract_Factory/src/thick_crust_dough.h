#pragma once

#include "dough.h"

class ThickCrustDough : public Dough {
public:
    virtual std::string to_string() override {
        return "ThickCrust style extra thick crust dough";
    }
};
