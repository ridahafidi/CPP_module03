#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap 
{
    private:
        std::string Name;
    public:
        DiamondTrap();
        DiamondTrap(const std::string &N);
        ~DiamondTrap();
        void attack(const std::string &target);
};


#endif