#pragma once
#include <iostream>
#include <vector>

//may use namespaces to avoid confusion with other branches (probably won't)

//TODO: Once enemy branch is done, add enemies to rooms

//Node based connections

enum RoomType {
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
        RoomType type; 
    
    public:
        Room(std::string n, std::vector< std::pair<Direction, Room> > c, int f, RoomType t); 
        RoomType getType();
        void initializeType();
        void addConnection(std::pair<Direction, Room> newConnection);
};
