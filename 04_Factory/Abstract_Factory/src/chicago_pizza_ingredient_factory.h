#pragma once

#include "pizza_ingredient_factory.h"
#include "thick_crust_dough.h"
#include "plum_tomato_sauce.h"
#include "mozzarella_cheese.h"
#include "black_olives.h"
#include "spinach.h"
#include "eggplant.h"
#include "sliced_pepperoni.h"
#include "frozen_clams.h"

class ChicagoPizzaIngredientFactory : protected PizzaIngredientFactory {
public:
    virtual std::shared_ptr<Dough> create_dough() override {
        return std::make_shared<ThickCrustDough>();
    }

    virtual std::shared_ptr<Sauce> create_sauce() override {
        return std::make_shared<PlumTomatoSauce>();
    }

    virtual std::shared_ptr<Cheese> create_cheese() override {
        return std::make_shared<MozzarellaCheese>();
    }

    virtual std::vector<std::shared_ptr<Veggies>> create_veggies() override {
        return {
            std::make_shared<BlackOlives>(),
            std::make_shared<Spinach>(),
            std::make_shared<Eggplant>(),
        };
    }

    virtual std::shared_ptr<Pepperoni> create_pepperoni() override {
        return std::make_shared<SlicedPepperoni>();
    }

    virtual std::shared_ptr<Clams> create_clams() override {
        return std::make_shared<FrozenClams>();
    }
};
