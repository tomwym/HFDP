#pragma once

#include "pizza.h"

class ChicagoStylePepperoniPizza : public Pizza {
public:

    ChicagoStylePepperoniPizza()
    : Pizza{
        "Chicago Deep Dish Pepperoni Pizza",
        "Extra Thick Crust Dough",
        "Plum Tomato Sauce"
    }
    {
        _toppings.push_back("Shredded Mozzarella Cheese");
        _toppings.push_back("Black Olives");
        _toppings.push_back("Spinach");
        _toppings.push_back("Eggplant");
        _toppings.push_back("Sliced Pepperoni");
    }

    virtual void cut() override {
        std::cout << "Cutting the pizza into square slices" << '\n';
    }

};
