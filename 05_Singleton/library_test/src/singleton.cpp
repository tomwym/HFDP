#include "singleton.h"

size_t Singleton::get_counter() {
    return _counter;
}

Singleton::Singleton()
: _counter{0}
{}

void Singleton::increment_counter() {
    ++_counter;
}

Singleton& Singleton::get_instance() {
    static Singleton _object;
    _object.increment_counter();
    return _object;
}