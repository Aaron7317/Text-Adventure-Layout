#pragma once
#include <iostream>
#include <vector>
#include "items.h"


struct Inventory {
        
        std::vector<Item> stuff;
        
        Inventory();

        void printInventory();
        void addItem(Item addedItem);
        void removeItem(Item removedItem);
};
