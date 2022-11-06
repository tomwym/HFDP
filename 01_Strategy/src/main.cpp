#include <iostream>

#include "duck.h"
#include "duck_mallard.h"
#include "duck_model.h"
#include "fly_no_way.h"
#include "fly_rocket_powered.h"
#include "quack_mute.h"


int main() {

    std::unique_ptr<Duck> mallard {std::make_unique<DuckMallard>()};
    mallard->perform_fly();
    mallard->perform_quack();

    std::unique_ptr<Duck> model {std::make_unique<DuckModel>()};
    mallard->perform_fly();
    mallard->set_fly_behavior(std::make_unique<FlyRocketPowered>());
    mallard->perform_fly();

    return(0);
}