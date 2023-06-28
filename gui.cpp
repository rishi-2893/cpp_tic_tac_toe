#include "gui.h"

#include <iostream>
#include <iomanip>
#include <string>


void GUI::welcome_user(){
    std::string title {"WELCOME TO THE TIC TAC TOE GAME"};
    int title_width {int((program_width - title.size())/2)};

    // Displaying margin
    std::cout
    << std::setw(program_width) << std::setfill('-') <<"" << "\n\n";

    // Displaying title
    std::cout
    << std::setw(title_width) << std::setfill(' ') << title << "\n";
    
    // Displaying margin
    std::cout
    << std::setw(program_width) << std::setfill('-') <<"" << "\n\n";


    // Take the inputs
    p1.set_name_shape(1);
    p2.set_name_shape(2);

}


void GUI::display_names(){
    std::string names_title {p1.get_name() + " vs " + p2.get_name()};

    std::cout<< names_title << "\n\n";  // display "player1Name vs player2Name"
}


// Assuming every element in grid is initialized to a empty space " "
void GUI::display_board(std::vector<std::vector<char>> &grid){
    int grid_width = (program_width - 14)/2;
    int grid_height = 7;

    int r{};
    for(int i{}; i<grid_height; ++i){
        
        // Common ouput formatting
        std::cout
        << std::setfill(' ') << std::setw(grid_width);


        if(i == 0 || i == 6){
            std::cout<< "-------------\n";
        }
        else if(i == 2 || i == 4){
            std::cout<< "|---|---|---|\n";
        }
        else{
            std::string s = "| " + std::string(1,grid.at(r).at(0)) + " | " + std::string(1,grid.at(r).at(1)) +" | " + std::string(1,grid.at(r).at(2)) +" |\n";
            std::cout
            << s;
            r++;
            // << "| " << grid.at(i).at(0) <<" | " << grid.at(i).at(1) <<" | " << grid.at(i).at(2) <<" |\n";
        }
    }
/***EXAMPLE***
-------------
|   |   |   |
|---|---|---|
|   |   |   |
|---|---|---|
|   |   |   |
-------------
***EXAMPLE**/
}



