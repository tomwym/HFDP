#pragma once

#include <memory>

#include "pizza.h"
#include "pizza_ingredient_factory.h"

class CheesePizza : public Pizza {
public:
    CheesePizza(std::shared_ptr<PizzaIngredientFactory> ingredient_factory)
    : _ingredient_factory{ingredient_factory}
    {}

    void prepare() {
        std::cout << "Preparing " << _name << '\n';

        _dough = _ingredient_factory->create_dough();
        _sauce = _ingredient_factory->create_sauce();
        _cheese = _ingredient_factory->create_cheese();
    }

protected:
    std::shared_ptr<PizzaIngredientFactory> _ingredient_factory;
};