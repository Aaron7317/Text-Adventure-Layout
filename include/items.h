#pragma once
#include <iostream>

//ALLOCATE ALL ITEMS WITH NEW (ON THE HEAP)

/*
"delete this" is ok as long as you do not attempt to call any code of that object after the deletion (not even the destructor). 
So a self deleting object shoud only be placed at the heap and shoud have a private destructor to protect from creation on the stack.

I dont know if a direct call to the destructor leads to undefined behaviour but a userdefined delete-operator would'nt get executed.
*/

class Item {
    private:
        ~Item();
    public:
        std::string name;

        Item(std::string n);
        Item();
    
};


class HealthConsumable : public Item {
};

class Weapon : public Item {

};