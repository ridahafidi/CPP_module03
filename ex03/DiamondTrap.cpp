#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap("_clap_name"), Name("")
{
    EnergyPoints = 50;
    std::cout << "DiamondTrap Constructor called \n";
}

DiamondTrap::DiamondTrap(const std::string &N):ClapTrap(N + "_clap_name"), Name(N)
{
    EnergyPoints = 50;
    std::cout << "DiamondTrap Parametrized Constructor called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &other):ClapTrap(other), ScavTrap(other), FragTrap(other), Name(other.Name){
    std::cout << "DiamondTrap Copy Constructor called\n";
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other){
    if (this != &other){
        ClapTrap::operator=(other);
        Name = other.Name;
    }
    std::cout << "DiamondTrap Assignment Operator called\n";
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called\n";
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}
void DiamondTrap::whoAmI()
{
    std::cout << "My name is : " << Name << " and my ClapTrap name is : " << ClapTrap::get_name() << "\n";
}