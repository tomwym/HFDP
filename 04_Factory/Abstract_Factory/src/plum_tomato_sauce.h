#pragma once

#include "sauce.h"

class PlumTomatoSauce : public Sauce {
public:
    virtual std::string to_string() override {
        return "Tomato sauce with plum tomatoes";
    }
};
