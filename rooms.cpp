#include "rooms.h"


Room::Room(std::string n, std::vector< std::pair<Direction, Room> > c, int f, RoomType t)
    :name(n), connections(c), floor(f), type(t)
    {
    }

RoomType Room::getType() {
    return type;
}

void Room::initializeType() {
    switch(type) {
        case 0:
            
            break;
        
        case 1:
            break;

        case 2:
            break;

        case 3:
            break;
        
        case 4:
            break;

        default:
            std::cout << "Error! Invalid Room Type";
            break;
    }
}

void Room::addConnection(std::pair<Direction, Room> newConnection) {
    connections.push_back(newConnection);
}