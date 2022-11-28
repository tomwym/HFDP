#pragma once

#include "pizza.h"

class NYStylePepperoniPizza : public Pizza {
public:

    NYStylePepperoniPizza()
    : Pizza{
        "NY Style Pepperoni Pizza",
        "Thin Crust Dough",
        "Marinara Sauce"
    }
    {
        _toppings.push_back("Grated Reggiano Cheese");
        _toppings.push_back("Sliced Pepperoni");
        _toppings.push_back("Garlic");
        _toppings.push_back("Onion");
        _toppings.push_back("Mushrooms");
        _toppings.push_back("Red Pepper");
    }

};
