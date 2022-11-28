#pragma once

#include "pizza_store.h"
#include "pizza_ingredient_factory.h"
#include "cheese_pizza.h"
#include "veggie_pizza.h"
#include "clam_pizza.h"
#include "pepperoni_pizza.h"

class NYPizzaStore : public PizzaStore {
public:

    virtual std::shared_ptr<Pizza> create_pizza(const std::string& pizza_type) override {
        std::shared_ptr<Pizza> pizza;
        std::shared_ptr<PizzaIngredientFactory> ingredient_factory;

        if(pizza_type == "cheese") {
            pizza = std::make_shared<CheesePizza>(ingredient_factory);
            pizza->set_name("New York Style Cheese Pizza");
        } else if(pizza_type == "veggie"){
            pizza = std::make_shared<VeggiePizza>(ingredient_factory);
            pizza->set_name("New York Style Veggie Pizza");
        } else if(pizza_type == "clam"){
            pizza = std::make_shared<ClamPizza>(ingredient_factory);
            pizza->set_name("New York Style Clam Pizza");
        } else if(pizza_type == "pepperoni"){
            pizza = std::make_shared<PepperoniPizza>(ingredient_factory);
            pizza->set_name("New York Style Pepperoni Pizza");
        }

        return pizza;
    }
};