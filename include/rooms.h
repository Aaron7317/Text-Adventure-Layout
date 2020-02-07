#pragma once
#include <iostream>
#include <vector>


//Node based connections


enum Direction {
    NORTH = 1, SOUTH, EAST, WEST, UP, DOWN
};

class Room { 
        
    public:

        std::string name;
        std::vector< std::pair<Direction, Room> > connections;

        Room(std::string n); 

        void addConnection(std::pair<Direction, Room> newConnection);
        void addMultipleConnections(std::vector< std::pair<Direction, Room> > newConnectionVector);
        std::vector< std::pair<Direction, Room> > getConnections();
        //room method will be overriden for each room type
        void roomMethod();
};

class Shrine : public Room {
    public:
        Shrine(std::string n);
        void roomMethod();
};

class Shop : public Room {
    public:
        Shop(std::string n);
        void roomMethod();
};

class Library : public Room {
    private:
        std::string loreEntry;
    public:
        Library(std::string n, std::string l);
        void roomMethod();
};

