#pragma once

#include <memory>
#include <string>

#include "pizza.h"

class PizzaStore {
public:
    virtual std::shared_ptr<Pizza> create_pizza(const std::string&) = 0;

    std::shared_ptr<Pizza> order_pizza(const std::string& pizza_type) {
        std::shared_ptr<Pizza> pizza{create_pizza(pizza_type)};

        std::cout << "--- Making a " + pizza->get_name() + " ---" << '\n';
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();

        return pizza;
    }
};