#pragma once

#include "pizza_ingredient_factory.h"
#include "thin_crust_dough.h"
#include "marinara_sauce.h"
#include "reggiano_cheese.h"
#include "garlic.h"
#include "onion.h"
#include "mushroom.h"
#include "red_pepper.h"
#include "sliced_pepperoni.h"
#include "fresh_clams.h"

class NYPizzaIngredientFactory : protected PizzaIngredientFactory {
public:
    virtual std::shared_ptr<Dough> create_dough() override {
        return std::make_shared<ThinCrustDough>();
    }

    virtual std::shared_ptr<Sauce> create_sauce() override {
        return std::make_shared<MarinaraSauce>();
    }

    virtual std::shared_ptr<Cheese> create_cheese() override {
        return std::make_shared<ReggianoCheese>();
    }

    virtual std::vector<std::shared_ptr<Veggies>> create_veggies() override {
        return {
            std::make_shared<Garlic>(),
            std::make_shared<Onion>(),
            std::make_shared<Mushroom>(),
            std::make_shared<RedPepper>(),
        };
    }

    virtual std::shared_ptr<Pepperoni> create_pepperoni() override {
        return std::make_shared<SlicedPepperoni>();
    }

    virtual std::shared_ptr<Clams> create_clams() override {
        return std::make_shared<FreshClams>();
    }
};
