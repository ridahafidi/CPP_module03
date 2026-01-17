#include "ClapTrap.hpp"

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
}