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

FragTrap::FragTrap(const FragTrap &other):ClapTrap(other){
    std::cout << "FragTrap Copy Constructor called \n";
}

FragTrap &FragTrap::operator=(const FragTrap &other){
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "FragTrap Assignment Operator called \n";
    return (*this);
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
    if (HitPoints == 0)
    {
        std::cout << "FragTrap " << get_name() << " can't attack, no hit points left!" << std::endl;
        return;
    }
    if (EnergyPoints == 0)
    {
        std::cout << "FragTrap " << get_name() << " can't attack, no energy points left!" << std::endl;
        return;
    }
    EnergyPoints--;
    std::cout << "FragTrap " << get_name() << " attacks " << target << ", causing " << get_AttackDamage() << " points of damage!" << std::endl;
}