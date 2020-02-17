#include <iostream>
#include <algorithm>
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


void Game::updateAvailableMoves() {
    availabeMoves.clear();
    for (int i = 0; i < currentRoom.connections.size(); i++) {
        availabeMoves.push_back(currentRoom.connections[i].first);
    }
} 

void Game::addCommand(BaseCommand newCommand) {
    availableCommands.push_back(newCommand);
}


void Game::intro() {
    std::cout << "Welcome to the Text Adventures of Destromos!\n";
    std::cout << "Press Enter to continue\n";
    std::cin;
    std::cout << "You stand empty handed in a dimly lit room.";
    currentState = STANDARDTURN;
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