#ifndef __GUI_H__
#define __GUI_H__

#include "player.h"

class GUI
{
private:
    Player &p1;
    Player &p2;
    int program_width {50};
public:
    GUI(Player &player_1, Player &player_2):p1{player_1}, p2{player_2}{ }
    void welcome_user(); // welcome user and ask for the game mode
    void display_names(); // display player names "vs"
    void display_board(std::vector<std::vector<char>> &grid); // need both players to get the current state

};

#endif