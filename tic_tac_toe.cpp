#include<stdio.h>
#include <windows.h>
#include<conio.h>
int gotoLocation(int x, int y){

    COORD c;
    c.X=x;
    c.Y=y;

        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
int clear_screen(){
    gotoLocation(0,0);
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");
    printf("                                                                                                                                          \n");

}
int introduction(){
   int menu; // Variable to store the users menu choice

    // Display the welcome message and menu options
    printf("                                   WELCOME TO TIC TAC TOE (Square and Triangle Edition) ");
    printf("\n\n\n\n                                        TO PLAY TIC TAC TOE MULTIPLAYER PRESS - 1 ");
    printf("\n                                                TO EXIT THE GAME PRESS - 2 ");
    printf("\n\n                                                   ENTER YOUR CHOICE - ");

    // Infinite loop to ensure the user enters a valid choice
    while (TRUE) {
        // Read the users input
        scanf("%d", &menu);

        // Check if the user entered a valid choice
        if (menu == 1 || menu == 2) {
            // Exit the loop if the choice is valid (1 or 2)
            break;
        } else {
            // Display an error message if the choice is invalid
            printf("\n                                                       ERROR TwT\n");
            printf("\n                                         PLEASE ENTER FROM THE GIVEN CHOICES - ");
        }
    }

    // Clear the screen after receiving a valid input
    clear_screen();

    // Return the users choice (1 or 2) to the calling function
    return menu;
}
int board_printing(){
    int x = 1; // This variable represents the cell number, starting from 1.
    int z = 0; // This variable keeps track of the vertical position for gotoLocation.
    // Outer loop to create 3 rows (for a 3x3 grid)
    for (int i = 0; i < 3; i++) {
        // Move the cursor to the specified location.
        gotoLocation(55, z);
        // Increment vertical position after setting the cursor.
        z++;
        // Inner loop to create 6 lines for each row (3 lines for content and 3 for dividers).
        for (int n = 0; n < 6; n++) {

            // Condition for when a cells content is printed (row center line).
            if (n == 3) {
                // Print the cell number with spacing for alignment.
                printf("     %d      ", x);
                // Print the vertical divider.
                printf("||");
                // Increment the cell number for the next cell.
                x++;
            }
            else {
                // Print empty spaces for alignment.
                printf("            ");
                // Print the vertical divider.
                printf("||");
            }
            // Print the second cells content in the row.
            if (n == 3) {
                // Print the cell number.
                printf("     %d      ", x);
                // Print the vertical divider.
                printf("||");
                // Increment the cell number for the next cell.
                x++;
            }
             else {
                // Print empty spaces for alignment.
                printf("            ");
                // Print the vertical divider.
                printf("||");
            }
            // Print the third cells content in the row.
            if (n == 3) {
                // Print the cell number.
                printf("     %d      ", x);
                // Increment the cell number for the next cell.
                x++;
            } \
            else {
                // Print empty spaces for alignment.
                printf("            ");
            }
            // Move the cursor down for the next line.
            gotoLocation(55, z);
            // Increment vertical position.
            z++;
        }
        // Print the row separator line after completing one row, except for the last row.
        if (i != 2) {
            printf("=======================================\n");
        }
    }
}
int input_box(){
     // Move the cursor to position (55, 24) and print the top border of the table.
    gotoLocation(55, 24);
    printf("+--------------------------------------+");
    // Move the cursor to position (55, 25) and print the header row with "PLAYER-1" and "PLAYER-2".
    gotoLocation(55, 25);
    printf("|    PLAYER-1      |      PLAYER-2     |");
    // Move the cursor to position (55, 26) and print the border below the header.
    gotoLocation(55, 26);
    printf("+--------------------------------------+");
    // Move the cursor to position (55, 27) and print an empty row for content.
    gotoLocation(55, 27);
    printf("|                                      |");
    // Move the cursor to position (55, 28) and print the border below the empty row.
    gotoLocation(55, 28);
    printf("+--------------------------------------+");
    // Loop to create six rows below the current table border.
    for (int i = 1; i < 7; i++) {
        // Move the cursor to the next line and print an empty row with vertical dividers.
        gotoLocation(55, 28 + i);
        printf("|                  |                   |");
    }
    // Move the cursor to position (55, 35) and print the bottom border of the table.
    gotoLocation(55, 35);
    printf("+--------------------------------------+");

}
int triangle_printing(int x,int y){
    int i, space, n = 5, j = 0, t = 0; // Initialize variables for looping, dimensions, and positioning.

    // Check if x and y represent the top-left cell (0,0).
    if (x == 0 && y == 0) {
        for (i = 0; i < n - 1; i++) {
            gotoLocation(56, 0 + t); // Position for the top-left triangle.
            t++; // Increment row position.

            // Print leading spaces for triangle alignment.
            for (space = 1; space < n - i; space++) {
                printf(" ");
            }

            // Print the triangle outline.
            for (j = 0; j <= 2 * i; j++) {
                if (j == 0 || j == 2 * i) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            gotoLocation(56, 0 + t); // Move to the next line.
        }
        // Print the base of the triangle.
        for (i = 0; i < 2 * n - 1; i++) {
            printf("*");
        }
    }

    // Check if x and y represent the top-middle cell (0,1).
    if (x == 0 && y == 1) {
        for (i = 0; i < n - 1; i++) {
            gotoLocation(70, 0 + t); // Position for the top-middle triangle.
            t++; // Increment row position.

            for (space = 1; space < n - i; space++) {
                printf(" ");
            }

            for (j = 0; j <= 2 * i; j++) {
                if (j == 0 || j == 2 * i) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            gotoLocation(70, 0 + t);
        }
        for (i = 0; i < 2 * n - 1; i++) {
            printf("*");
        }
    }

    // Check if x and y represent the top-right cell (0,2).
    if (x == 0 && y == 2) {
        for (i = 0; i < n - 1; i++) {
            gotoLocation(84, 0 + t); // Position for the top-right triangle.
            t++;

            for (space = 1; space < n - i; space++) {
                printf(" ");
            }

            for (j = 0; j <= 2 * i; j++) {
                if (j == 0 || j == 2 * i) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            gotoLocation(84, 0 + t);
        }
        for (i = 0; i < 2 * n - 1; i++) {
            printf("*");
        }
    }

    // Check if x and y represent the middle-left cell (1,0).
    if (x == 1 && y == 0) {
        for (i = 0; i < n - 1; i++) {
            gotoLocation(56, 8 + t); // Position for the middle-left triangle.
            t++;

            for (space = 1; space < n - i; space++) {
                printf(" ");
            }

            for (j = 0; j <= 2 * i; j++) {
                if (j == 0 || j == 2 * i) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            gotoLocation(56, 8 + t);
        }
        for (i = 0; i < 2 * n - 1; i++) {
            printf("*");
        }
    }

    // Check if x and y represent the middle cell (1,1).
    if (x == 1 && y == 1) {
        for (i = 0; i < n - 1; i++) {
            gotoLocation(70, 8 + t); // Position for the middle triangle.
            t++;

            for (space = 1; space < n - i; space++) {
                printf(" ");
            }

            for (j = 0; j <= 2 * i; j++) {
                if (j == 0 || j == 2 * i) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            gotoLocation(70, 8 + t);
        }
        for (i = 0; i < 2 * n - 1; i++) {
            printf("*");
        }
    }

    // Check if x and y represent the middle-right cell (1,2).
    if (x == 1 && y == 2) {
        for (i = 0; i < n - 1; i++) {
            gotoLocation(84, 8 + t); // Position for the middle-right triangle.
            t++;

            for (space = 1; space < n - i; space++) {
                printf(" ");
            }

            for (j = 0; j <= 2 * i; j++) {
                if (j == 0 || j == 2 * i) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            gotoLocation(84, 8 + t);
        }
        for (i = 0; i < 2 * n - 1; i++) {
            printf("*");
        }
    }

    // Check if x and y represent the bottom-left cell (2,0).
    if (x == 2 && y == 0) {
        for (i = 0; i < n - 1; i++) {
            gotoLocation(56, 15 + t); // Position for the bottom-left triangle.
            t++;

            for (space = 1; space < n - i; space++) {
                printf(" ");
            }

            for (j = 0; j <= 2 * i; j++) {
                if (j == 0 || j == 2 * i) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            gotoLocation(56, 15 + t);
        }
        for (i = 0; i < 2 * n - 1; i++) {
            printf("*");
        }
    }

    // Check if x and y represent the bottom-middle cell (2,1).
    if (x == 2 && y == 1) {
        for (i = 0; i < n - 1; i++) {
            gotoLocation(70, 15 + t); // Position for the bottom-middle triangle.
            t++;

            for (space = 1; space < n - i; space++) {
                printf(" ");
            }

            for (j = 0; j <= 2 * i; j++) {
                if (j == 0 || j == 2 * i) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            gotoLocation(70, 15 + t);
        }
        for (i = 0; i < 2 * n - 1; i++) {
            printf("*");
        }
    }

    // Check if x and y represent the bottom-right cell (2,2).
    if (x == 2 && y == 2) {
        for (i = 0; i < n - 1; i++) {
            gotoLocation(84, 15 + t); // Position for the bottom-right triangle.
            t++;

            for (space = 1; space < n - i; space++) {
                printf(" ");
            }

            for (j = 0; j <= 2 * i; j++) {
                if (j == 0 || j == 2 * i) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            gotoLocation(84, 15 + t);
        }
        for (i = 0; i < 2 * n - 1; i++) {
            printf("*");
        }
    }

    return 0;
}
int square_printing(int x, int y){
    int i, j, N = 5, t = 0; // Initialize variables: `N` is the size of the square, `t` tracks row offset.

    // Check if the position is the top-left cell (0,0).
    if (x == 0 && y == 0) {
        for (i = 1; i <= N; i++) {
            gotoLocation(56, 0 + t); // Move the cursor to the start of the top-left square.
            t++; // Increment the row offset for the next line.
            for (j = 1; j <= N; j++) {
                // Print '*' for the border and spaces for the inside.
                if (i == 1 || i == N || j == 1 || j == N) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
        }
    }

    // Check if the position is the top-middle cell (0,1).
    if (x == 0 && y == 1) {
        for (i = 1; i <= N; i++) {
            gotoLocation(70, 0 + t); // Move the cursor to the top-middle square.
            t++;
            for (j = 1; j <= N; j++) {
                if (i == 1 || i == N || j == 1 || j == N) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
        }
    }

    // Check if the position is the top-right cell (0,2).
    if (x == 0 && y == 2) {
        for (i = 1; i <= N; i++) {
            gotoLocation(84, 0 + t); // Move the cursor to the top-right square.
            t++;
            for (j = 1; j <= N; j++) {
                if (i == 1 || i == N || j == 1 || j == N) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
        }
    }

    // Check if the position is the middle-left cell (1,0).
    if (x == 1 && y == 0) {
        for (i = 1; i <= N; i++) {
            gotoLocation(56, 8 + t); // Move the cursor to the middle-left square.
            t++;
            for (j = 1; j <= N; j++) {
                if (i == 1 || i == N || j == 1 || j == N) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
        }
    }

    // Check if the position is the middle cell (1,1).
    if (x == 1 && y == 1) {
        for (i = 1; i <= N; i++) {
            gotoLocation(70, 8 + t); // Move the cursor to the middle square.
            t++;
            for (j = 1; j <= N; j++) {
                if (i == 1 || i == N || j == 1 || j == N) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
        }
    }

    // Check if the position is the middle-right cell (1,2).
    if (x == 1 && y == 2) {
        for (i = 1; i <= N; i++) {
            gotoLocation(84, 8 + t); // Move the cursor to the middle-right square.
            t++;
            for (j = 1; j <= N; j++) {
                if (i == 1 || i == N || j == 1 || j == N) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
        }
    }

    // Check if the position is the bottom-left cell (2,0).
    if (x == 2 && y == 0) {
        for (i = 1; i <= N; i++) {
            gotoLocation(56, 15 + t); // Move the cursor to the bottom-left square.
            t++;
            for (j = 1; j <= N; j++) {
                if (i == 1 || i == N || j == 1 || j == N) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
        }
    }

    // Check if the position is the bottom-middle cell (2,1).
    if (x == 2 && y == 1) {
        for (i = 1; i <= N; i++) {
            gotoLocation(70, 15 + t); // Move the cursor to the bottom-middle square.
            t++;
            for (j = 1; j <= N; j++) {
                if (i == 1 || i == N || j == 1 || j == N) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
        }
    }

    // Check if the position is the bottom-right cell (2,2).
    if (x == 2 && y == 2) {
        for (i = 1; i <= N; i++) {
            gotoLocation(84, 15 + t); // Move the cursor to the bottom-right square.
            t++;
            for (j = 1; j <= N; j++) {
                if (i == 1 || i == N || j == 1 || j == N) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
        }
    }
    return 0;
}
int win_conditions(int ttt[3][3]){
    int winner = 0;

    // Check if the first row has all identical values.
    if (ttt[0][0] == ttt[0][1] && ttt[0][1] == ttt[0][2]) {
        winner = 1;
    }

    // Check if the second row has all identical values.
    if (ttt[1][0] == ttt[1][1] && ttt[1][1] == ttt[1][2]) {
        winner = 1;
    }

    // Check if the third row has all identical values.
    if (ttt[2][0] == ttt[2][1] && ttt[2][1] == ttt[2][2]) {
        winner = 1;
    }

    // Check if the first column has all identical values.
    if (ttt[0][0] == ttt[1][0] && ttt[1][0] == ttt[2][0]) {
        winner = 1;
    }

    // Check if the second column has all identical values.
    if (ttt[0][1] == ttt[1][1] && ttt[1][1] == ttt[2][1]) {
        winner = 1;
    }

    // Check if the third column has all identical values.
    if (ttt[0][2] == ttt[1][2] && ttt[1][2] == ttt[2][2]) {
        winner = 1;
    }

    // Check if the left-to-right diagonal has all identical values.
    if (ttt[0][0] == ttt[1][1] && ttt[1][1] == ttt[2][2]) {
        winner = 1;
    }

    // Check if the right-to-left diagonal has all identical values.
    if (ttt[0][2] == ttt[1][1] && ttt[1][1] == ttt[2][0]) {
        winner = 1;
    }

    return winner;

}
int main (){
    int box, winner = 0, menue = 0, x, y;
COORD values[9] = {{0, 0}, {0, 1}, {0, 2}, {1, 0}, {1, 1}, {1, 2}, {2, 0}, {2, 1}, {2, 2}};

    // Start the main game loop
    while (menue != 2) {
        gotoLocation(0, 0); // Set the cursor position to the top left
        menue = introduction(); // Show the introduction screen and get menu choice

        if (menue == 1) { // If the player chooses to start a game
            // Initialize the tic-tac-toe board with placeholders
            int ttt[3][3] = {{-1, -2, -3}, {-4, -5, -6}, {-7, -8, -9}};
            board_printing(); // Print the board layout

            // Loop for 9 turns (as the board has 9 cells)
            for (int i = 0; i < 9; i++) {

                if (i % 2 == 0) { // Player 1's (Triangle's) turn
                    input_box(); // Input box function
                    gotoLocation(56, 27); // Set position for player message
                    printf("player-1(TRIANGLE PLAYS)"); // Display the player 1 message
                    gotoLocation(56, 29); // Set position for box prompt
                    printf("enter the"); // Prompt player to enter box number
                    gotoLocation(56, 30); // Set position for box number input
                    printf("box number : ");

                    // While loop to input the box number
                    while (TRUE) {
                        gotoLocation(60, 32);
                        scanf("%d", &box); // Take box number as input
                        x = values[box - 1].X; // Get the X coordinate
                        y = values[box - 1].Y; // Get the Y coordinate

                        // Check if the box is valid and unoccupied
                        if (box > 0 && box < 10 && ttt[x][y] < 0) {
                            break; // Break if the box is valid
                        } else {
                            // If invalid, prompt again
                            gotoLocation(56, 29);
                            printf("enter the");
                            gotoLocation(56, 30);
                            printf("box number   ");
                            gotoLocation(56, 31);
                            printf("correctly :");
                            gotoLocation(60, 32);
                            printf("     ");
                        }
                    }

                    // Update the board with player 1s move
                    x = values[box - 1].X;
                    y = values[box - 1].Y;
                    ttt[x][y] = 2; // Set the move on the board
                    triangle_printing(x, y); // Print Triangle symbol on the board
                    winner = win_conditions(ttt); // Check for winner

                    if (winner == 1) { // If player 1 wins
                        clear_screen(); // Clear screen for victory message
                        gotoLocation(50, 20); // Set position for victory message
                        printf("HOORRAYY!! TRIANGLE HAS WON   (press any key to continue)");
                        getch(); // Wait for key press
                        clear_screen(); // Clear screen after victory
                        break; // Exit the loop
                    }
                } else { // Player 2's (Square's) turn
                    input_box(); // Input box function
                    gotoLocation(56, 27); // Set position for player message
                    printf("player-2(SQUARE PLAYS)  "); // Display the player 2 message
                    gotoLocation(75, 29); // Set position for box prompt
                    printf("enter the"); // Prompt player to enter box number
                    gotoLocation(75, 30); // Set position for box number input
                    printf("box number : ");

                    // While loop to input the box number
                    while (TRUE) {
                        gotoLocation(79, 32);
                        scanf("%d", &box); // Take box number as input
                        x = values[box - 1].X; // Get the X coordinate
                        y = values[box - 1].Y; // Get the Y coordinate

                        // Check if the box is valid and unoccupied
                        if (box > 0 && box < 10 && ttt[x][y] < 0) {
                            break; // Break if the box is valid
                        } else {
                            // If invalid, prompt again
                            gotoLocation(75, 29);
                            printf("enter the");
                            gotoLocation(75, 30);
                            printf("box number   ");
                            gotoLocation(75, 31);
                            printf("correctly :");
                            gotoLocation(79, 32);
                            printf("    ");
                        }
                    }

                    // Update the board with player 2s move
                    x = values[box - 1].X;
                    y = values[box - 1].Y;
                    ttt[x][y] = 3; // Set the move on the board
                    square_printing(x, y); // Print Square symbol on the board
                    winner = win_conditions(ttt); // Check for winner

                    if (winner == 1) { // If player 2 wins
                        clear_screen(); // Clear screen for victory message
                        gotoLocation(50, 20); // Set position for victory message
                        printf("HOORRAYY!! SQUARE HAS WON (press any key to continue)");
                        getch(); // Wait for key press
                        clear_screen(); // Clear screen after victory
                        break; // Exit the loop
                    }
                }
            }

            // If no winner is found after all turns, declare a tie
            if (winner != 1) {
                clear_screen(); // Clear screen for tie message
                gotoLocation(50, 20); // Set position for tie message
                printf("OHH NOO!! THE GAME HAS TIED (press any key to continue)");
                getch(); // Wait for key press
                clear_screen(); // Clear screen after tie
                gotoLocation(0, 0); // Return to start position
            }
        } else { // If user chooses to exit the game
            clear_screen(); // Clear the screen
            gotoLocation(0, 0); // Set position at the top left
            break; // Exit the main game loop
        }
    }
}