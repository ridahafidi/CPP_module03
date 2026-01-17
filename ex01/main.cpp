#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap T1("rajol1");
    ScavTrap T2("rajol");
    ScavTrap T3;
    T3 = T2 = T1;
    T1.attack(T2.get_name());
    T2.takeDamage(100);
    T3.beRepaired(200);
    T1.guardGate();
}