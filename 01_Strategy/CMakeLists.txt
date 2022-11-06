add_executable(01_strategy)

target_sources(01_strategy
    PRIVATE
        src/main.cpp
        src/duck.h
        src/duck_mallard.h
        src/duck_model.h
        src/fly_behavior.h
        src/fly_no_way.h
        src/fly_rocket_powered.h
        src/fly_with_wings.h
        src/quack_behavior.h
        src/quack_mute.h
        src/quack_normally.h
        src/quack_squeak.h
)
