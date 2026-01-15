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
        DiamondTrap(const DiamondTrap &other);
        DiamondTrap &operator=(const DiamondTrap &other);
        ~DiamondTrap();
        void attack(const std::string &target);
        void whoAmI();
};




#endif