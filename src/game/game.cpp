#include <iostream>
#include <algorithm>
#include "game.h"



Game::Game(GameState cS, Room initialRoom)
:currentState(cS), currentRoom(initialRoom)
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


void Game::moveRooms(Room newRoom) {
    currentRoom.leave();
    newRoom.enter();
    currentRoom = newRoom;
}

int Game::askUserCommand() {
    int userCommand; 
    for (int i = 0; i < availableCommands.size(); i ++) {
        std::cout << i << ") " << availableCommands[i] << "\n";
    }
    std::cout << "What would you like to do?\n";
    std::cin >> userCommand;
    return userCommand;
    
}