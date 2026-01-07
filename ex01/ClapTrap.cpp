
#include "ClapTrap.hpp"

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << get_name() << " repaired " << amount << " points of HitPoints!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << get_name() << " took " << amount << " points of damage!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << get_name() << " attacks " << target << ", causing " << get_AttackDamage() << " points of damage!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    this->set_name(other.get_name());
    this->set_HitPoints(other.get_HitPoints());
    this->set_EnergyPoints(other.get_EnergyPoints());
    this->set_AttackDamage(other.get_AttackDamage());
    return (*this);
}

void ClapTrap::set_AttackDamage(const unsigned int &NewAttackDamage)
{
   AttackDamage = NewAttackDamage;
}
unsigned int ClapTrap::get_AttackDamage(void) const
{
   return (AttackDamage);
}

void ClapTrap::set_EnergyPoints(const unsigned int &NewEnergyPoints)
{
   EnergyPoints = NewEnergyPoints;
}
unsigned int ClapTrap::get_EnergyPoints(void) const
{
   return (EnergyPoints);
}

void ClapTrap::set_HitPoints(const unsigned int &NewHitPoints)
{
   HitPoints = NewHitPoints;
}
unsigned int ClapTrap::get_HitPoints(void) const
{
   return (HitPoints);
}

void ClapTrap::set_name(const std::string &NewName)
{
    Name = NewName;
}
std::string ClapTrap::get_name(void) const
{
    return (Name);
}

ClapTrap::ClapTrap():Name("Default"),HitPoints(10),EnergyPoints(10),AttackDamage(0)
{
    std::cout << "ClapTrap Constructor called\n";
}
ClapTrap::ClapTrap(const std::string &N):Name(N),HitPoints(10),EnergyPoints(10),AttackDamage(0)
{
    std::cout << "ClapTrap Parametrized Constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    this->set_name(other.get_name());
    this->set_HitPoints(other.get_HitPoints());
    this->set_EnergyPoints(other.get_EnergyPoints());
    this->set_AttackDamage(other.get_AttackDamage());  
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called\n";
}