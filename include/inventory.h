#pragma once
#include <iostream>
#include <vector>
#include "items.h"


struct Inventory {
        
        std::vector<Item> stuff;
        
        Inventory();

        void displayInventory();
        void addItem(Item addedItem);
        void removeItem(int removeIndex);
};
