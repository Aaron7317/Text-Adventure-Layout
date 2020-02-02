#pragma once
#include <iostream>
#include "items.h"


class Inventory {
    private:
        Item stuff[8];
    public:
        Inventory();

        void printInventory();
};
