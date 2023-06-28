#ifndef __GAME_H__
#define __GAME_H__

#include <vector>


#include "player.h"
#include "gui.h"

class Game
{
public:
    std::vector<std::vector<char>> grid;
    Game();
    void start_game(); // starts the game, manages the game flow
    bool switch_turn(); // gives 0, 1 alternatively using static variable
    
    char check_rows(); // check if a player won
    char check_columns(); // check if a player won
    char check_diagonals(); // check if a player won
    int won(); // 0: game still on, 1: player 1 won, 2: player 2 won
    bool play_again();

};

#endif