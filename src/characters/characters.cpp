#include "characters.h"


Character::Character(int l)
:level(l) 
{
    damage = level - 2;
    health = level * 4;
}

bool Character::isAlive() {
    if (health <= 0) {
        return false;
    }
    return true;
}

void Character::attack(int amount) {
    health -= amount;
}

void Character::addHealth(int amount) {
    health += amount;
}