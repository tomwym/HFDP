#pragma once

#include "pizza.h"

class NYStyleVeggiePizza : public Pizza {
public:

    NYStyleVeggiePizza()
    : Pizza{
        "NY Style Veggie Pizza",
        "Thin Crust Dough",
        "Marinara Sauce"
    }
    {
        _toppings.push_back("Grated Reggiano Cheese");
        _toppings.push_back("Garlic");
        _toppings.push_back("Onion");
        _toppings.push_back("Mushrooms");
        _toppings.push_back("Red Pepper");
    }

};
