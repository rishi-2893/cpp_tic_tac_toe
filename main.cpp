#include <iostream>
#include <cstdlib>
#include "game.h"

int main(){
    bool game_on {true};

    while(game_on){
    Game game;
    game.start_game();
    game_on = game.play_again();
    }
    return 0;
}