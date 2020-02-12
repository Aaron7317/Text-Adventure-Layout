#pragma once
#include <iostream>


class Item {
    public:
        std::string name;

        Item(std::string n);
        Item();

        void useItem();
};


class HealthConsumable : public Item {
    public:
        int healingAmount;

        HealthConsumable(std::string n, int hA);
        void useItem(Player& player);
};

class Weapon : public Item {
    public:
        int weaponDamage;

        Weapon(std::string n, int wD);
        void useItem();
        void useItem(Enemy& target, Player player);
};