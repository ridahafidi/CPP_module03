#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():Name("")
{
    ClapTrap::Name = Name + "_clap_name";
    EnergyPoints = ScavTrap::EnergyPoints;
    std::cout << "DiamondTrap Constructor called \n";
}

DiamondTrap::DiamondTrap(const std::string &N):Name(N)
{
    ClapTrap::Name = N + "_clap_name";
    EnergyPoints = ScavTrap::EnergyPoints;
    std::cout << "DiamondTrap Parametrized Constructor called\n";
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called\n";
}

void DiamondTrap::attack(const std::string& target)
{
    std::cout << "ScavTrap " << get_name() << " attacks " << target << ", causing " << get_AttackDamage() << " points of damage!" << std::endl;
}
