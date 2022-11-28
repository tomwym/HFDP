#pragma once

#include "pizza.h"

class ChicagoStyleCheesePizza : public Pizza {
public:

    ChicagoStyleCheesePizza()
    : Pizza{
        "Chicago Style Deep Dish Cheese Pizza",
        "Extra Thick Crust Dough",
        "Plum Tomato Sauce"
    }
    {
        _toppings.push_back("Shredded Mozzarella Cheese");
    }

    virtual void cut() override {
        std::cout << "Cutting the pizza into square slices" << '\n';
    }

};
