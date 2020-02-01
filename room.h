#include <iostream>
#include <vector>

enum Type {
    INVALID = 0, EMPTY, TREASURE, SHRINE, SHOP, ARENA
};

enum Direction {
    NORTH = 1, SOUTH, EAST, WEST
};

struct Room {
    std::string name;
    std::vector< std::pair<Direction, Room> > connections;
    int floor;
    Type roomType; 
};