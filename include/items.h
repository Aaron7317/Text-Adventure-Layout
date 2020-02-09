#pragma once
#include <iostream>

//ALLOCATE ALL ITEMS WITH NEW (ON THE HEAP)

class Item {
    public:
        std::string name;

        Item(std::string n);
        Item();
        ~Item();

        void deleteItem();
};

class HealthConsumable : public Item {
    void consumeItem();
};

class Weapon : public Item {

};