#include "player.h"
#include <iostream>
#include <vector>
#include <string>


void Player::set_name_shape(int player_number){

    // Inputting the name
    std::cout << "Name of player "<<player_number<<": ";
    std::cin>> this->name;


    // Setting the shape
        // if player_number = 1 then O else X
    if(player_number == 1){
        shape = 'O';
    }
    else{
        shape = 'X';
    }
}



bool Player::get_move(std::vector<std::vector<char>> &grid){
    
    // Asking and inputting the index - ONE based indexing
    int row, col;
    std::cout<< "Its your turn "<< get_name() <<"\n";
    std::cout<< "Enter the row and column number separated by a space: ";
    std::cin >> row>> col;

    // Checking if less than row / col out of range
    if(row < 0 || row > 2 || col < 0 || col > 2){
        std::cout<< "You entered an invalid position...Enter again\n";
        return false; // invalid position
    }
    
    
    // Assumption - Every position in vector is initialized to -> ' '
    else if(grid.at(row).at(col) != ' '){
        std::cout<< "This position is already occupied...Enter again\n";
        return false; // position occupied
    }

    else{
        grid.at(row).at(col) = this->shape;
        return true; // grid updated
    }
    

}


std::string Player::get_name(){
    return name;
}