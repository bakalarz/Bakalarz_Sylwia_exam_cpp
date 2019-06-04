#include "coffee_machine.hpp"

#include <iostream>

namespace Machine{

CoffeeMachine::CoffeeMachine()
{
    m_water_level = 2.0;
    m_coffee_level = 3.0;
}
CoffeeMachine::CoffeeMachine(double water_level, double coffee_level)
{
    m_water_level = water_level;
    m_coffee_level = coffee_level;
}

void CoffeeMachine::increase_coffee_level()
{
    if((m_coffee_level + 1.0) <= m_max_coffee_level)
    {
        m_coffee_level++;  
    }
}
void CoffeeMachine::increase_water_level()
{
    if((m_water_level + 1.0) <= m_max_water_level)
    {
        m_water_level++;  
    }
}

}