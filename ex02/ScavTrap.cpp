#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << "ScavTrap Constructor called \n";
}

ScavTrap::ScavTrap(const std::string &N):ClapTrap(N){
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << "ScavTrap Parametrized Constructor called \n";
}

ScavTrap::ScavTrap(const ScavTrap &other):ClapTrap(other){
    std::cout << "ScavTrap Copy Constructor called \n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other){
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "ScavTrap Assignment Operator called \n";
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called \n";
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << get_name() << " is on Guard Mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (HitPoints == 0)
    {
        std::cout << "ScavTrap " << get_name() << " can't attack, no hit points left!" << std::endl;
        return;
    }
    if (EnergyPoints == 0)
    {
        std::cout << "ScavTrap " << get_name() << " can't attack, no energy points left!" << std::endl;
        return;
    }
    EnergyPoints--;
    std::cout << "ScavTrap " << get_name() << " attacks " << target << ", causing " << get_AttackDamage() << " points of damage!" << std::endl;
}
