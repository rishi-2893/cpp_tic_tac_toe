#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <string>
#include <iostream>
#include <vector>

class Player
{
private:
    std::string name; // player name
    char shape; // Shape assigned in the game

public:

    void set_name_shape(int player_number); // Asks and sets the username
    std::string get_name(); // getter to return the name


    /*************get_move()************
     * Asks player for the next move
     * Validate if the move was correct, if not ask again
     * grid is the 3*3 matrix, current state of game
     * returns true if moved successfully
    *************************************/
    bool get_move(std::vector<std::vector<char>> &grid);
};


#endif