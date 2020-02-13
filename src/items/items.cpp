#include "items.h"


Item::Item(std::string n) 
:name(n) 
{
}


void Item::useItem() {
    std::cout << "You cannot do this now.\n";
}


HealthConsumable::HealthConsumable(std::string n, int hA) 
:Item(n)
{
    healingAmount = hA;
}


void HealthConsumable::useItem(Player& player) {
    player.addHealth(healingAmount);
}


Weapon::Weapon(std::string n, int wD) 
:Item(n)
{
    weaponDamage = wD;
}


void Weapon::useItem() {
    std::cout << "You cannot do this now.\n";
}


void Weapon::useItem(Enemy& target, Player player) {
    target.attack(player.damage + weaponDamage);
}