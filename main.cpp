#include <iostream>
#include "rooms.h"

Room entrance("Entrance", 1, STANDARD);
Room r1("Room 1", 1, STANDARD);
Room r2("Room 2", 1, SHOP);

int main() {

    entrance.addConnection({EAST, r1});
    r1.addMultipleConnections({{WEST, entrance}, {NORTH, r2}});
    r2.addConnection({SOUTH, r1});

    
    

    return 0;
}