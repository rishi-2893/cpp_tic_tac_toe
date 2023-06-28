#include "game.h"

#include <cstdlib>


Game::Game(){
    // Initializing grid with a empty space
    for(int i{}; i<3; i++){
        std::vector<char> temp;
        for(int j{}; j<3; j++){
            temp.push_back(' ');
        }
        grid.push_back(temp);
    }
}

void Game::start_game(){
    int game_status {0};


    // Declaring players
    Player p1;
    Player p2;

    // Declaring GUI
    GUI gui {p1, p2};

    // Displaying initial contents
    gui.welcome_user();
    gui.display_names();

    
    while(!game_status){

        // "vs" and latest grid
        std::system("cls");
        gui.display_names();
        gui.display_board(grid);


        // Aks the user for input
        int get_players_turn = switch_turn();
        bool correct_move {false};
        
        // Ask for input until user gives the correct input
        while(!correct_move){
            correct_move = (get_players_turn == 0)? p1.get_move(grid) : p2.get_move(grid);
        }


        // Update game status
        game_status = won();
    }

    std::system("cls");
    gui.display_names();
    gui.display_board(grid);
    std::cout<< "\n\nHURRAY! Player "<<game_status << " won the match\n";
}


bool Game::switch_turn(){
    static int i{-1};
    ++i;
    return (i%2);
}


int Game::won(){
    char r, c, d;
    r = check_rows();
    c = check_columns();
    d = check_diagonals();

    if(r == 'O' || c == 'O' ||d == 'O')
        return 1;
    else if(r == 'X' || c == 'X' ||d == 'X')  
        return 2;  
    return 0;
}


char Game::check_rows(){
    char c;

    for(int i{}; i<3; i++){
        c = grid.at(i).at(0);
        int count {};
        for(int j{1}; j<3; j++){
            count += (c == grid.at(i).at(j));
        }
        if(count == 2)
            return c;
    }
    return ' ';
}




char Game::check_columns(){
    char c;

    for(int i{}; i<3; i++){
        c = grid.at(0).at(i);
        int count {};
        for(int j{1}; j<3; j++){
            count += (c == grid.at(j).at(i));
        }
        if(count == 2) return c;
    }
    return ' ';
}



char Game::check_diagonals(){
    char main_diag = grid.at(0).at(0);
    char anti_diag = grid.at(0).at(2);

    int main_count{};
    int anti_count{};
    for(int i{1}; i<3; ++i){
        if(main_diag == grid[i][i])  {main_count++;}
        if(anti_diag == grid[i][3-1-i]) {anti_count++;}
    }

    if(main_count == 2) {return main_diag;}
    if(anti_count == 2) {return anti_diag;}


    return ' ';
}


bool Game::play_again(){
    char c;
    std::cout<< "Do you want to play again?(y/n): ";
    std::cin >> c;
    int result = (c== 'y')? 1 : 0;
    std::system("cls");
    return result;
}