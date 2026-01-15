// #include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    ClapTrap Player;
    ClapTrap Enemy("l3adow dyal si mhamed");
    ClapTrap Enemy1 = Enemy;
    ClapTrap Enemy2(Enemy1);
    


    Player.set_name("si mhamed");
    Player.attack(Enemy.get_name());
    Player.attack(Enemy1.get_name());
    Player.attack(Enemy2.get_name());
    Player.takeDamage(100000);
    Player.beRepaired(1000000);
    Player = Enemy;
    Player.attack(Enemy.get_name());
    Player.attack(Enemy1.get_name());
    Player.attack(Enemy2.get_name());
    Player.takeDamage(100000);
    Player.beRepaired(1000000);
    Player.set_name("si mhamed");
    ClapTrap E1, E2, E3, E4("sowy");
    E1 = E2 = E3 = E4;
    E1.attack("si mhamed");
    E4.attack("si mhamed");

    std::cout << "\n\n";

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
}