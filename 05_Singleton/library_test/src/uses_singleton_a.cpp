#include "uses_singleton_a.h"

UsesSingletonA::UsesSingletonA() {
    for (int i=0; i<10; ++i) {
        Singleton& singleton {Singleton::get_instance()};
    }
    std::cout << "Use static singleton A use get_instance count: "
                << Singleton::get_instance().get_counter() << '\n';
}