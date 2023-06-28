# FUNCTIONALITIES
    
*Playing Options*
    1. Two person play
    2. Play with computer

*Graphics*
    1. Change the shape of line a player wins
    2. When playing against computer then wait for 1 second before making next move
    3. Display **player1 vs player 2** on the top
    4. Use ascii art for shapes and tic tac toe grid


# CLASS
    1. GUI class
    2. Player class
    3. Computer class
    4. Game class - game logic
    5. WinnerDetector class


# TASK ALLOTMENT TO CLASSES
    1. Welcome user and ask which mode to play
    2. Ask for their name, if two player then ask both
    3. Show whose turn is it, display by their name
    4. Ask user where to draw there shape in the grid
    5. Update the UI after user enters there choice
    6. Periodically clear the previous outputs to keep the screen clean
    7. After every move check if game is still on
    8. If not then declare the winner and update the grid with changed shapes
    9. Ask the user to play again
    10 Repeat...


# PROGRAM DRY RUN - Two player mode
    1. Welcoming the user and asking for mode - 2 player selected
    2. Ask player1 name, ask player2 name
    3. Clear the screen
    5. Assign users a random shape (O or X)
    4. HEADER -> Show player 1(O) vs player 2(X) names at the top below it show the empty 3*3 grid
    6. Ask user for an integer location on grid to draw the shape
        i. Handle if user enters a invalid number
        ii. Throw error if user tries to draw on an filled position on the grid
    7. After pressing enter clear the screen, update the grid, HEADER should remain
    8. Ask the second player... clear screen... update grid...
    9. Check if either won, if yes then clear screen and update grid
    10. Show necessary GUI updates and ask to play again



# CLASSES

**GUI**
    Responsible for welcoming the user and asking for the game mode.
    Displays the player names and the game board.
    Shows messages indicating whose turn it is.
    Updates the UI after a player enters their move.
    Asks the user to play again.


**Player**
    Stores the player's name and assigned shape (O or X).
    Handles the input of the player's move on the grid.
    Alerts the user if an invalid number or filled position is chosen.


**Game**
    Manages the game flow and turn management.
    Keeps track of the state of the game board.
    Checks for a win condition after each move.
    Determines the winner and updates the grid accordingly.


**WinnerDetector**
    Contains the logic to detect a winner on the game board.
    Checks the rows, columns, and diagonals for matching shapes to determine a win.