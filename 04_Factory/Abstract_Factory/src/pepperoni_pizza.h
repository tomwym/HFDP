#pragma once

#include <memory>

#include "pizza.h"
#include "pizza_ingredient_factory.h"

class PepperoniPizza : public Pizza {
public:
    PepperoniPizza(std::shared_ptr<PizzaIngredientFactory> ingredient_factory)
    : _ingredient_factory{ingredient_factory}
    {}

    void prepare() {
        std::cout << "Preparing " << _name << '\n';

        _dough = _ingredient_factory->create_dough();
        _sauce = _ingredient_factory->create_sauce();
        _cheese = _ingredient_factory->create_cheese();
        _veggies = _ingredient_factory->create_veggies();
        _pepperoni = _ingredient_factory->create_pepperoni();
    }

protected:
    std::shared_ptr<PizzaIngredientFactory> _ingredient_factory;
};