#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap x("rajoL2");
    DiamondTrap x2("rajol");
    DiamondTrap x3;
    x3 = x2 = x;
    x2.attack(x2.get_name());
    x2.takeDamage(x2.get_AttackDamage());
    x3.beRepaired(x2.get_HitPoints());
    x3.whoAmI();
    x2.whoAmI();
    x.whoAmI();
    std::cout << x3.get_HitPoints() << "\n";

    std::cout << "my tests : \n";

    x.whoAmI();
    ClapTrap *Tz = &x;
    Tz->attack("claptrap target");
    std::cout << "ClapTrap attack damage is : " << Tz->get_AttackDamage() << std::endl;
    std::cout << "ClapTrap HP is : " << Tz->get_HitPoints() << std::endl;
    std::cout << "ClapTrap EnrgyPoints is : " << Tz->get_EnergyPoints() << std::endl;
    std::cout << "ClapTrap Name is : " << Tz->get_name() << std::endl;

    x.attack("DiamondTrap target");
    std::cout << "DiamondTrap attack damage is : " << x.get_AttackDamage()<< std::endl;
    std::cout << "DiamondTrap HP is : " << x.get_HitPoints() << std::endl;
    std::cout << "DiamondTrap EnrgyPoints is : " << x.get_EnergyPoints() << std::endl;
    std::cout << "DiamondTrap Name is : " << x.get_name() << std::endl;

    return (0);
}