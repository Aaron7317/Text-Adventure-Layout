#pragma once
#include <iostream>
#include <vector>
#include "rooms.h"


enum GameState {
    INTRO = 0, STANDARDTURN, COMBATTURN
};

enum BaseCommand {
    MOVE = 0, INVENTORY, LOOKAROUND, SHOP
};
// make commandVector and maybe use switch with the index of command
class Game {
    private:
        Room currentRoom;
        GameState currentState;
        std::vector<Direction> availabeMoves;
        std::vector<BaseCommand> availableCommands;
    public:
        Game(GameState cS, Room initialRoom);

        void setGameState(GameState newState);
        GameState getGameState();
        
        void updateAvailableMoves();
        void addCommand(BaseCommand newCommand);

        void intro();
        void standardTurn();
        void combatTurn();
        void gameLoop();

        void moveRooms(Room newRoom);
        BaseCommand askUserCommand();
};