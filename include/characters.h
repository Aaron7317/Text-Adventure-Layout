#pragma once
#include <iostream>

//Little men with pitchforks and cat heads
//Also big ants that wear shoes and have mustaches and glasses
//a smoking pipe that has a funny face and arms but no legs so it Carrie's itself around by its arms

enum EnemyType {
    PITCHFORKCAT = 0, GIANTANT, PIPE
};


class Character {
    public:
        int level, health, damage;

        Character(int l);

        bool isAlive();
        void attack(int amount);
        void addHealth(int amount);
};


class Enemy : public Character {
    private:
        EnemyType type;

    public:
        Enemy(int l, EnemyType t);
        
        void engage();
};


class Player : public Character {
    private:
        int maxHealth, money;
        double xp;

    public:
        Player(int l);
        
        void calculateWinnings(Enemy defeatedOpponent);
        void setMaxHealth();
        void balanceHealth();
};