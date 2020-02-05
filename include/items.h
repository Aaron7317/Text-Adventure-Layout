#pragma once
#include <iostream>


class Item {
    public:
        std::string name;
        int maxAmount;

        Item(std::string n, int mA);
        Item();

        
};

class HealthConsumable : public Item{


};

class Weapon : public Item {

};