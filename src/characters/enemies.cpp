#include "characters.h"


Enemy::Enemy(int l, EnemyType t) 
:type(t), Character(l)
{   
} 


void Enemy::engage() {
    switch(type) {
        case 0:
            std::cout << "A short, but ferocious, man with the head of a cat rushes towards you screeching!\n";
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

