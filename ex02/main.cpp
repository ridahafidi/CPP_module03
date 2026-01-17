#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ScavTrap T1("rajol1");
    ScavTrap T2("rajol");
    ScavTrap T3;
    T3 = T2 = T1;
    T1.attack(T2.get_name());
    T2.takeDamage(T2.get_AttackDamage());
    T3.beRepaired(T2.get_HitPoints());
    std::cout << T3.get_HitPoints() << "\n";
    T1.guardGate();

    std::cout << "\n\n";

    FragTrap L1("rajol1");
    FragTrap L2("rajol");
    FragTrap L3;
    L3 = L2 = L1;
    L1.attack(L2.get_name());
    L2.takeDamage(L2.get_AttackDamage());
    L3.beRepaired(L2.get_HitPoints());
    std::cout << L3.get_HitPoints() << "\n";
    L3.highFivesGuys();

    std::cout << "\n\n";
    ClapTrap *p;
    p = &L1;
    p->attack("test");
    p = &T1;
    p->attack("test");
}