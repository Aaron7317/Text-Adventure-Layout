#include "rooms.h"


Room::Room(std::string n)
    :name(n)
    {
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

void Room::roomMethod() {
    std::cout << "The room is empty.";
}


//All Room Types...

Shrine::Shrine(std::string n) 
:Room(n) 
{
}

void Shrine::roomMethod() {
    std::cout << "You enter a room with a beautiful shrine...\n";
    std::cout << "Your health is restored to full\n";
    //Player.health = maxHealth;
}


Shop::Shop(std::string n) 
:Room(n)
{
}

void Shop::roomMethod() {
    std::cout << "You enter a large area with a nearby shop...\n";
    std::cout << "You can probably buy goods there.\n";
    //commandVector.push_back(SHOP)    (SHOP is an enum / commandVector is a method where all available command enums are stored)
}