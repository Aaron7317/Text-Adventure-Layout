#pragma once
#include <iostream>
#include <vector>

enum GameState {
    INTRO = 0, STANDARDTURN, COMBATTURN
};

enum BaseCommand {
    MOVE = 0, INVENTORY, LOOKAROUND, SHOP
};
// make commandVector and maybe use switch with the index of command
class Game {
    private:
        GameState currentState;
    public:
        Game(GameState cS);

        void setGameState(GameState newState);
        GameState getGameState();
        void intro();
        void standardTurn();
        void combatTurn();
        
        void gameLoop();
};