#include <iostream>
#include <vector>

//TODO: Once enemy branch is done, add enemies to rooms

//Node based connections

enum Type {
    STANDARD = 0, TREASURE, SHRINE, SHOP, ARENA
};

enum Direction {
    NORTH = 1, SOUTH, EAST, WEST
};

class Room {
    private:
        
        std::string name;
        std::vector< std::pair<Direction, Room> > connections;
        int floor;
        Type roomType; 
    
    public:
        Room(std::string n, std::vector< std::pair<Direction, Room> > c, int f, Type t); 
        Type getType();
        void initializeType();
        void addConnection(std::pair<Direction, Room> newConnection);
};
