#include <memory>

#include "ny_pizza_store.h"
#include "chicago_pizza_store.h"

int main() {
    std::shared_ptr<PizzaStore> ny_store{std::make_shared<NYPizzaStore>()};
    std::shared_ptr<PizzaStore> chicago_store{std::make_shared<ChicagoPizzaStore>()};

    std::shared_ptr<Pizza> ny_pizza {ny_store->OrderPizza("cheese")};
    std::cout << "Ethan ordered a " << ny_pizza->get_name() << '\n' << '\n';

    std::shared_ptr<Pizza> chicago_pizza {chicago_store->OrderPizza("cheese")};
    std::cout << "Joel ordered a " << chicago_pizza->get_name() << '\n' << '\n';
}
