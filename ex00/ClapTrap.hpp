#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
private:
    std::string Name;
    unsigned int HitPoints;
    unsigned int EnergyPoints;
    unsigned int AttackDamage;

public:
    ClapTrap();
    ClapTrap(const std::string &N);
    ClapTrap(const ClapTrap &other);
    ClapTrap &operator=(const ClapTrap &other);
    ~ClapTrap();
    void    set_name(const std::string &NewName);
    std::string &get_name(void) const;
    void    set_HitPoints(const unsigned int &NewHitPoints);
    unsigned int &get_HitPoints(void) const;
    void    set_EnergyPoints(const unsigned int &NewEnergyPoints);
    unsigned int &get_EnergyPoints(void) const;
    void    set_AttackDamage(const unsigned int &NewAttackDamage);
    unsigned int &get_AttackDamage(void) const;
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << get_name() << " repaired " << amount << " points of HitPoints!";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << get_name() << " took " << amount << " points of damage!";
}

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << get_name() << " attacks " << target << ", causing " << get_AttackDamage() << " points of damage!";
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
unsigned int &ClapTrap::get_AttackDamage(void) const
{
   unsigned int AttackD = AttackDamage;
   return (AttackD);
}

void ClapTrap::set_EnergyPoints(const unsigned int &NewEnergyPoints)
{
   EnergyPoints = NewEnergyPoints;
}
unsigned int &ClapTrap::get_EnergyPoints(void) const
{
   unsigned int EnergyP = EnergyPoints;
   return (EnergyP);
}

void ClapTrap::set_HitPoints(const unsigned int &NewHitPoints)
{
   HitPoints = NewHitPoints;
}
unsigned int &ClapTrap::get_HitPoints(void) const
{
   unsigned int HitP = HitPoints;
   return (HitP);
}

void ClapTrap::set_name(const std::string &NewName)
{
    Name = NewName;
}
std::string& ClapTrap::get_name(void) const
{
    std::string N = Name;
    return (N);
}

ClapTrap::ClapTrap():Name(""),HitPoints(10),EnergyPoints(10),AttackDamage(0)
{
    std::cout << "Constructor called\n";
}
ClapTrap::ClapTrap(const std::string &N):Name(N),HitPoints(10),EnergyPoints(10),AttackDamage(0)
{
    std::cout << "Parametrized Constructor called\n";
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
    std::cout << "Deconstructor called\n";
}




#endif