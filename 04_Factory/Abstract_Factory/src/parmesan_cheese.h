#pragma once

#include "cheese.h"

class ParmesanCheese : public Cheese {
public:
    virtual std::string to_string() override {
        return "Shredded Parmesan";
    }
};
