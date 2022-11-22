#pragma once

#include <string>
#include <memory>

#include "pizza.h"

class PizzaStore {
public:
    std::shared_ptr<Pizza> OrderPizza(const std::string& order_type) {
        std::shared_ptr<Pizza> pizza {CreatePizza(order_type)};

        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();

        return pizza;
    }

    virtual std::shared_ptr<Pizza> CreatePizza(const std::string& order_type) = 0;

};
