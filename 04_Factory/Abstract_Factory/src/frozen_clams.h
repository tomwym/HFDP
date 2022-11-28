#pragma once

#include "clams.h"

class FrozenClams : public Clams {
public:
    virtual std::string to_string() override {
        return "Frozen Clams from Chesapeake Bay";
    }
};
