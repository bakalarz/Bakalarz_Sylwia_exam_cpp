#ifndef DOCUMENTS_BAKALARZ_SYLWIA_EXAM_CPP_COFFEE_MACHINE_HPP_
#define DOCUMENTS_BAKALARZ_SYLWIA_EXAM_CPP_COFFEE_MACHINE_HPP_

namespace Machine {
class CoffeeMachine {

    protected:
        double m_water_level;
        double m_coffee_level;
        static double constexpr m_max_water_level = 10;
        static double constexpr m_max_coffee_level = 10;
    public:
        CoffeeMachine();
        CoffeeMachine(double, double);

        inline void set_water_level(double water_level){m_water_level = water_level;} 
        inline void set_coffee_level(double coffee_level){m_coffee_level = coffee_level;}

        inline double get_water_level() const {return m_water_level;} 
        inline double get_coffee_level() const {return m_coffee_level;}
        inline double get_max_water_level() const {return m_max_water_level;}
        inline double get_max_coffee_level() const {return m_max_coffee_level;}
        

        void increase_coffee_level();
        void increase_water_level();
        
};
}

#endif