add_executable(02_observer)

target_sources(02_observer
    PRIVATE
        src/main.cpp
        src/current_conditions_display.h
        src/display_element.h
        src/observer.h
        src/subject.h
        src/weather_data.h
)
