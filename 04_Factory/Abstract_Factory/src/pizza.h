#pragma once

#include <memory>
#include <vector>
#include <string>
#include <iostream>

#include "dough.h"
#include "sauce.h"
#include "cheese.h"
#include "veggies.h"
#include "pepperoni.h"
#include "clams.h"

class Pizza {
public:
    virtual void prepare() = 0;

    void bake() {
        std::cout << "Bake for 25 mins at 350" << '\n';
    }

    void cut() {
        std::cout << "Cutting the pizzza into diagonal slices" << '\n';
    }

    void box() {
        std::cout << "Place pizza in official PizzaStore box" << '\n';
    }

    void set_name(const std::string& name) {
        _name = name;
    }

    std::string get_name() {
        return _name;
    }

protected:
    std::string _name;
    std::shared_ptr<Dough> _dough;
    std::shared_ptr<Sauce> _sauce;
    std::vector<std::shared_ptr<Veggies>> _veggies;
    std::shared_ptr<Cheese> _cheese;
    std::shared_ptr<Pepperoni> _pepperoni;
    std::shared_ptr<Clams> _clam;
};