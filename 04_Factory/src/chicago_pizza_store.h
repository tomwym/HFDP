#pragma once

#include <memory>

#include "pizza_store.h"
#include "chicago_style_cheese_pizza.h"
#include "chicago_style_clam_pizza.h"
#include "chicago_style_pepperoni_pizza.h"
#include "chicago_style_veggie_pizza.h"

class ChicagoPizzaStore : public PizzaStore {
public:

    virtual std::shared_ptr<Pizza> CreatePizza(const std::string& order_type) override {
        if (order_type == "cheese") {
            return std::make_shared<ChicagoStyleCheesePizza>();
        } else if (order_type == "veggie") {
            return std::make_shared<ChicagoStyleVeggiePizza>();
        } else if (order_type == "clam") {
            return std::make_shared<ChicagoStyleClamPizza>();
        } else if (order_type == "pepperoni") {
            return std::make_shared<ChicagoStylePepperoniPizza>();
        } else {
            return nullptr;
        }
    }

};
