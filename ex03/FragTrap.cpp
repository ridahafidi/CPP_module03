#include "FragTrap.hpp"

FragTrap::FragTrap(){
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "FragTrap Constructor called \n";
}

FragTrap::FragTrap(const std::string &N):ClapTrap(N){
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "FragTrap Parametrized Constructor called \n";
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called \n";
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << get_name() << " is asking for a HighFive" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    std::cout << "FragTrap " << get_name() << " attacks " << target << ", causing " << get_AttackDamage() << " points of damage!" << std::endl;
}