#include "rooms.h"


Room::Room(std::string n, int f, RoomType t)
    :name(n), floor(f), type(t)
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

void Room::addMultipleConnections(std::vector< std::pair<Direction, Room> > newConnectionVector) {
    for (int i = 0; i < newConnectionVector.size(); i++) {
        connections.push_back(newConnectionVector[i]);
    }
}

std::vector< std::pair<Direction, Room> > Room::getConnections() {
    return connections;
}