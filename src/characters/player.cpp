#include "characters.h"

Player::Player(int l) 
:Character(l)
{   
    health = level * 4;
    money = 0;
} 

void Player::setMaxHealth() {
    maxHealth = level * 4;
}

void Player::calculateWinnings(Enemy defeatedOpponent) {
    money += defeatedOpponent.level * 3;
    xp += defeatedOpponent.level *  2;
    if (xp >= 20) {
        xp -= level * 3;
        level += 1;
        setMaxHealth();
    }
}

void Player::balanceHealth() {
    if (health > maxHealth) {
        health = maxHealth;
    }
}

void Player::addHealth(int amount) {
    health += amount;
    balanceHealth();
}