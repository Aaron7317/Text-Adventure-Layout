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
        GameState currentState = INTRO;
    public:
        Game();

        void setGameState(GameState newState);
        GameState getGameState();
};