#include "game.h"


Game::Game() {

}

void Game::setGameState(GameState newState) {
    currentState = newState;
}

GameState Game::getGameState() {
    return currentState;
}