#ifndef DOCUMENTS_BAKALARZ_SYLWIA_EXAM_CPP_EXPRESSO_MACHINE_HPP_
#define DOCUMENTS_BAKALARZ_SYLWIA_EXAM_CPP_EXPRESSO_MACHINE_HPP_

#include "coffee_machine.hpp"

namespace Machine {
class ExpressoMachine : public CoffeeMachine {

    protected:
        double m_pressure_level;
        static double constexpr m_max_pressure_level = 10;
    public:
        ExpressoMachine();
        ExpressoMachine(double);

        inline void set_pressure_level(double pressure_level){m_pressure_level = pressure_level;} 
        inline double get_pressure_level() const {return m_pressure_level;} 
        inline double get_max_pressure_level() const {return m_max_pressure_level;}

        void init_pressure();
        void get_coffee();

};
}

#endif