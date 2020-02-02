#include "enemies.h"


Enemy::Enemy(int l, EnemyType t) 
    :level(l), type(t) 
    {
        damage = level - 2;
        health = level * 4;      
 
    }

void Enemy::hitEnemy(int amount) {
    health -= amount;
}

bool Enemy::isAlive() {
    if (health <= 0) {
        return false;
    }
    return true;
}

int Enemy::getdamage() {
    return damage;
}

int Enemy::getHealth() {
    return health;
}

//Little men with pitchforks and cat heads
//Also big ants that wear shoes and have mustaches and glasses
//a smoking pipe that has a funny face and arms but no legs so it Carrie's itself around by its arms

void Enemy::attack() {
    switch(type) {
        case 0:
            std::cout << "A short but ferocious man with the head of a cat rushes towards you screeching!\n";
            std::cout << "In it's hand is a sharp pitchfork.\n";
            break;

        case 1:
            std::cout << "An enormous ant lunges at you from the darkness!\n";
            std::cout << "It appears to be wearing spectacles of some sort.\n";
            break;
        
        case 2:
            std::cout << "A large metal pipe comes floating towards you!\n";
            std::cout << "It leaves behind a trail of smoke and appears to be carrying itself with it's own hands...\n";
            std::cout << "If that's even possible?\n";
            break;
        
        default:
            std::cout << "Error! Invalid Enemy Type";
            break;
    }
}