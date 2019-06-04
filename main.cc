#include <iostream>

#include "expresso_machine.hpp"

int main()
{
    Machine::ExpressoMachine coffee;

    double coffee_level = coffee.get_coffee_level();
    double water_level = coffee.get_water_level();
    double max_water_level = coffee.get_max_water_level();
    double max_coffee_level = coffee.get_max_coffee_level();

    std::cout << "coffee_level: " << coffee_level << std::endl
    << "water_level: " << water_level << std::endl
    << "max_water_level: " << max_water_level << std::endl
    << "max_coffee_level: " << max_coffee_level << std::endl;

    coffee.set_coffee_level(10);
    coffee.increase_coffee_level();
    coffee.increase_water_level();

    std::cout << "coffee_level: " << coffee.get_coffee_level() << std::endl
    << "water_level: " << coffee.get_water_level() << std::endl;

    coffee.init_pressure();

    std::cout << "Pressure: " << coffee.get_pressure_level() << std::endl;

    coffee.get_coffee();

    std::cout << "coffee_level: " << coffee.get_coffee_level() << std::endl
    << "water_level: " << coffee.get_water_level() << std::endl
    << "Pressure: " << coffee.get_pressure_level() << std::endl;

}