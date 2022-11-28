#pragma once

#include "pizza.h"

class NYStyleCheesePizza : public Pizza {
public:

    NYStyleCheesePizza()
    : Pizza{
        "NY Style Sauce and Cheese Pizza",
        "Thin Crust Dough",
        "Marinara Sauce"
    }
    {
        _toppings.push_back("Grated Reggiano Cheese");
    }

};
