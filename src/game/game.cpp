#include <iostream>
#include "game.h"


Game::Game(GameState cS)
:currentState(cS)
{
}

void Game::setGameState(GameState newState) {
    currentState = newState;
}

GameState Game::getGameState() {
    return currentState;
}

void Game::intro() {

}

void Game::standardTurn() {

}

void Game::combatTurn() {

}

// Main loop

void Game::gameLoop() {
    switch(currentState) {
        case INTRO:
            intro();
            break;

        case STANDARDTURN:
            standardTurn();
            break;

        case COMBATTURN:
            combatTurn();
            break;

        default:
            std::cout << "Error! Invalid gameState";
            break;
    }
}