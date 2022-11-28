#pragma once

#include <string>
#include <vector>
#include <iostream>

class Pizza {
public:

    Pizza(
        const std::string& name,
        const std::string& dough,
        const std::string& sauce
    )
    : _name{name}
    , _dough{dough}
    , _sauce{sauce}
    {}

    virtual void prepare() {
        std::cout << "Preparing " << _name << '\n';
        std::cout << "Tossing dough..." << '\n';
        std::cout << "Adding sauce..." << '\n';
        std::cout << "Adding toppings..." << '\n';
        for (const auto& topping : _toppings) {
            std::cout << topping << '\n';
        }
    }

    virtual void bake() {
        std::cout << "Bake for 25 minutes at 350" << '\n';
    }

    virtual void cut() {
        std::cout << "Cutting the pizza into diagonal slices" << '\n';
    }

    virtual void box() {
        std::cout << "Place pizza in official PizzaStore box" << '\n';
    }

    virtual std::string get_name() {
        return _name;
    }

protected:
    std::string _name;
    std::string _dough;
    std::string _sauce;
    std::vector<std::string> _toppings;
};
