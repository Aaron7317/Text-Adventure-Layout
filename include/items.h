#pragma once
#include <iostream>


class Item {
    public:
        std::string name;

        Item(std::string n);
        Item();
};


class HealthConsumable : public Item {
};

class Weapon : public Item {
};