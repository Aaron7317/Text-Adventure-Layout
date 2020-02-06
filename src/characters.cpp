#include "characters.h"


Character::Character(int l)
:level(l) 
{
    damage = level - 2;
    health = level * 4;
}


void Character::hit(int amount) {
    health -= amount;
}

bool Character::isAlive() {
    if (health <= 0) {
        return false;
    }
    return true;
}

