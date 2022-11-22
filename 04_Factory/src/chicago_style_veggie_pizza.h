#pragma once

#include "pizza.h"

class ChicagoStyleVeggiePizza : public Pizza {
public:

    ChicagoStyleVeggiePizza()
    : Pizza{
        "Chicago Deep Dish Veggie Pizza",
        "Extra Thick Crust Dough",
        "Plum Tomato Sauce"
    }
    {
        _toppings.push_back("Shredded Mozzarella Cheese");
        _toppings.push_back("Black Olives");
        _toppings.push_back("Spinach");
        _toppings.push_back("Eggplant");
    }

    virtual void cut() override {
        std::cout << "Cutting the pizza into square slices" << '\n';
    }

};
