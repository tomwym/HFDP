#pragma once

#include "clams.h"

class FreshClams : public Clams {
public:
    virtual std::string to_string() override {
        return "Fresh Clams from Long Island Sound";
    }
};
