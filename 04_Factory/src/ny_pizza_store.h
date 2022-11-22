#pragma once

#include <memory>

#include "pizza_store.h"
#include "ny_style_cheese_pizza.h"
#include "ny_style_clam_pizza.h"
#include "ny_style_pepperoni_pizza.h"
#include "ny_style_veggie_pizza.h"

class NYPizzaStore : public PizzaStore {
public:

    virtual std::shared_ptr<Pizza> CreatePizza(const std::string& order_type) override {
        if (order_type == "cheese") {
            return std::make_shared<NYStyleCheesePizza>();
        } else if (order_type == "veggie") {
            return std::make_shared<NYStyleVeggiePizza>();
        } else if (order_type == "clam") {
            return std::make_shared<NYStyleClamPizza>();
        } else if (order_type == "pepperoni") {
            return std::make_shared<NYStylePepperoniPizza>();
        } else {
            return nullptr;
        }
    }

};