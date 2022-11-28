#pragma once

#include "cheese.h"

class MozzarellaCheese : public Cheese {
public:
    virtual std::string to_string() override {
        return "Shredded Mozzarella";
    }
};
