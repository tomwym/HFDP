#include <memory>
#include <iostream>

#include "house_blend.h"
#include "dark_roast.h"
#include "decaf.h"
#include "espresso.h"
#include "steamed_milk.h"
#include "mocha.h"
#include "soy.h"
#include "whip.h"

int main() {
    std::shared_ptr<Beverage> beverage{std::make_shared<Espresso>()};
    std::cout << beverage->get_description()
        << " $" << beverage->cost() << '\n';

    std::shared_ptr<Beverage> beverage_2{std::make_shared<DarkRoast>()};
    beverage_2 = std::make_shared<Mocha>(beverage_2);
    beverage_2 = std::make_shared<Mocha>(beverage_2);
    beverage_2 = std::make_shared<Whip>(beverage_2);
    std::cout << beverage_2->get_description()
        << " $" << beverage_2->cost() << '\n';

    std::shared_ptr<Beverage> beverage_3{std::make_shared<HouseBlend>()};
    beverage_3 = std::make_shared<Soy>(beverage_3);
    beverage_3 = std::make_shared<Mocha>(beverage_3);
    beverage_3 = std::make_shared<Whip>(beverage_3);
    std::cout << beverage_3->get_description()
        << " $" << beverage_3->cost() << '\n';
}