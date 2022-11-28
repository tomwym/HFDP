#pragma once

#include "sauce.h"

class MarinaraSauce : public Sauce {
public:
    virtual std::string to_string() override {
        return "Marinara Sauce";
    }
};
