#pragma once

#include "pizza.h"

class ChicagoStyleClamPizza : public Pizza {
public:

    ChicagoStyleClamPizza()
    : Pizza{
        "Chicago Style Clam Pizza",
        "Extra Thick Crust Dough",
        "Plum Tomato Sauce"
    }
    {
        _toppings.push_back("Shredded Mozzarella Cheese");
        _toppings.push_back("Frozen Clams from Chesapeake Bay");
    }

    virtual void cut() override {
        std::cout << "Cutting the pizza into square slices" << '\n';
    }

};
