#pragma once

#include <memory>
#include <vector>

#include "dough.h"
#include "sauce.h"
#include "cheese.h"
#include "veggies.h"
#include "pepperoni.h"
#include "clams.h"

class PizzaIngredientFactory {
public:
    virtual std::shared_ptr<Dough> create_dough() = 0;
    virtual std::shared_ptr<Sauce> create_sauce() = 0;
    virtual std::shared_ptr<Cheese> create_cheese() = 0;
    virtual std::vector<std::shared_ptr<Veggies>> create_veggies() = 0;
    virtual std::shared_ptr<Pepperoni> create_pepperoni() = 0;
    virtual std::shared_ptr<Clams> create_clams() = 0;
};
