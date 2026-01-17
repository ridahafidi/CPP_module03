#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
    protected:
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
    std::string get_name(void) const;
    void    set_HitPoints(const unsigned int &NewHitPoints);
    unsigned int get_HitPoints(void) const;
    void    set_EnergyPoints(const unsigned int &NewEnergyPoints);
    unsigned int get_EnergyPoints(void) const;
    void    set_AttackDamage(const unsigned int &NewAttackDamage);
    unsigned int get_AttackDamage(void) const;
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};


#endif