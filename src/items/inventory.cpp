#include "inventory.h"

Inventory::Inventory() {
    
}

void Inventory::displayInventory() {
    for (int i = 0; i < stuff.size(); i++) {
        std::cout << i + 1 << ". " << stuff[i].name << "\n";
    }
}

void Inventory::addItem(Item addedItem) {
    stuff.push_back(addedItem);
}

void Inventory::removeItem(int removeIndex) {
    stuff.erase(stuff.begin() + removeIndex);
}