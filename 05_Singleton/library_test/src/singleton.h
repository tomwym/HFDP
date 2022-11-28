#pragma once

#include <memory>

class Singleton {
public:
    static Singleton& get_instance();
    size_t get_counter();
private:
    Singleton();
    void increment_counter();
    size_t _counter;
};