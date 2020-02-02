#pragma once
#include <iostream>

//Little men with pitchforks and cat heads
//Also big ants that wear shoes and have mustaches and glasses
//a smoking pipe that has a funny face and arms but no legs so it Carrie's itself around by its arms

enum EnemyType {
    PITCHFORKCAT = 0, GIANTANT, PIPE
};

class Enemy {
    private:
        EnemyType type;
        int level, health, damage;

    public:
        Enemy(int l, EnemyType t);
        
        void hitEnemy(int amount);
        bool isAlive();
        int getHealth();
        int getdamage();
        void attack();
};