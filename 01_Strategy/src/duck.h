#pragma once

#include <memory>

#include "fly_with_wings.h"
#include "quack_normally.h"
#include "quack_behavior.h"

class Duck {
public:
    Duck() = delete;
    Duck(
        std::unique_ptr<FlyBehavior> some_fly_behavior,
        std::unique_ptr<QuackBehavior> some_quack_behavior)
        : fly_behavior{std::move(some_fly_behavior)}
        , quack_behavior{std::move(some_quack_behavior)}
    {}

    virtual void set_fly_behavior(std::unique_ptr<FlyBehavior> other_fly_behavior) {
        fly_behavior = std::move(other_fly_behavior);
    }

    virtual void perform_fly() {
        fly_behavior->fly();
    }


    virtual void set_quack_behavior(std::unique_ptr<QuackBehavior> other_quack_behavior) {
        quack_behavior = std::move(other_quack_behavior);
    }

    virtual void perform_quack() {
        quack_behavior->quack();
    }

    std::unique_ptr<FlyBehavior> fly_behavior;
    std::unique_ptr<QuackBehavior> quack_behavior;
};