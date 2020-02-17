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

        Room();
        Room(std::string n); 

        void addConnection(std::pair<Direction, Room> newConnection);
        void addMultipleConnections(std::vector< std::pair<Direction, Room> > newConnectionVector);
        
        // methods will be overriden for each room type and called for each room
        void enter();
        void leave();
};


class Shrine : public Room {
    public:
        Shrine(std::string n);
        void enter();
        void leave();
};


class Shop : public Room {
    public:
        Shop(std::string n);
        void enter();
        void leave();
};


class Library : public Room {
    private:
        std::string loreEntry;
    public:
        Library(std::string n, std::string l);
        void enter();
        void leave();
};


class EnemyRoom : public Room {
    public:
        EnemyRoom(std::string name); //need to add enemy type into here
        void enter();
        void leave();
};

