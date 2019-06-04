#include "expresso_machine.hpp"

namespace Machine{

ExpressoMachine::ExpressoMachine()
{
    m_pressure_level = 1.0;
}
ExpressoMachine::ExpressoMachine(double pressure_level)
{
    m_pressure_level = pressure_level;
}
void ExpressoMachine::init_pressure()
{
    m_pressure_level = m_max_pressure_level;
}
void ExpressoMachine::get_coffee()
{
    if(m_pressure_level == m_max_pressure_level && m_coffee_level !=0 && m_water_level != 0)
    {
        m_pressure_level = 0;
        m_coffee_level --;
        m_water_level --;
    }
}

}