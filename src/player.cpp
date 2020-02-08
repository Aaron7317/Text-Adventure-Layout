#include "characters.h"

Player::Player(int l) 
:Character(l)
{   
    health = level * 4;
} 

void Player::setMaxHealth() {
    maxHealth = level * 4;
}

void Player::gainXP(Enemy defeatedOpponent) {
    xp += defeatedOpponent.level *  2;
    if (xp >= 20) {
        xp -= level * 3;
        level += 1;
        setMaxHealth();
    }
}