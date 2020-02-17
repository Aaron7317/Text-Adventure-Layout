#include <iostream>
#include "game.h"
// Object Instantiation:


// create all room objects here

//floor 1

Room f1Entrance1("Entrance");
Room f1Shrine2("Shrine");
Room f1Empty3("Empty Room"); //Enemy
Room f1Empty4("Empty Room"); //Enemy
Shop f1Shop5("Shop");
Shrine f1Shop6("Shrine");
Library f1Library7("Library", "");
Room f1Boss8("Arena");

//floor 2




//floor 3


//

Game mGame(INTRO, f1Entrance1);

int main() {
    mGame.gameLoop();
    

    return 0;
}