#pragma once

#include "pizza.h"

class NYStyleClamPizza : public Pizza {
public:

    NYStyleClamPizza()
    : Pizza{
        "NY Style Clam Pizza",
        "Thin Crust Dough",
        "Marinara Sauce"
    }
    {
        _toppings.push_back("Grated Reggiano Cheese");
        _toppings.push_back("Fresh Clams from Long Island Sound");
    }

};
