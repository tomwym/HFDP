#pragma once

#include "dough.h"

class ThinCrustDough : public Dough {
public:
    virtual std::string to_string() override {
        return "Thin Crust Dough";
    }
};
