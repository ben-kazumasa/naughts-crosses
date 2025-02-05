/*
PROGRAM TO PLAY NAUGHTS AND CROSSES IN THE CONSOLE
MADE WITHOUT ANY GUIDE
05/02/2025
*/

#include <stdio.h>
#define GRID_SIZE 9
#define TOP_LEFT 1
#define TOP_MID 2
#define TOP_RIGHT 3
#define MID_LEFT 4
#define MID_MID 5
#define MID_RIGHT 6
#define BOT_LEFT 7
#define BOT_MID 8
#define BOT_RIGHT 9
#define INPUT_HELP 0
#define INPUT_NOTHING -1
#define p1_SYMBOL 'X'
#define p2_SYMBOL 'O'

void print_header();
void print_grid();

int main(void) 
{   
    // Stores the grid elements, starting blank
    char gameGrid[GRID_SIZE] = {' ', ' ', ' ', ' ', ' ', ' '};
    
    // Stores the player's input
    int input = INPUT_NOTHING;
    //int tempInput = INPUT_NOTHING;
    // https://www.reddit.com/r/learnprogramming/comments/1d0w4x/c_scanf_d_but_error_if_user_enters_a_character/

    // Stores the current game turn, starting from 1: player 1 has odd, player 2 has even turns
    int gameTurn = 1;

    print_grid();
    printf("Turn: %d. Make a move: ", gameTurn);
    scanf("%d", &input);
    printf("\nYour move was: %d", input);
    
}

void print_header() 
{
    // Name of the game
    printf("\t NAUGHTS AND CROSSES\n");
    printf("\t*********************\n");
    printf("  Type '0' for help. Type q to quit.\n");
    printf("\n\n\n");
    //printf("Player 1: \n");
    //printf("Player 2: \n\n\n");
    //TODO add ability to choose if player goes first or second.
}

void print_grid() 
{
    
    print_header();

    // Prints the basic 3x3 grid for the game
    // Each square is 7 spaces across, and 3 lines tall, excluding boundary lines

    printf("\t     ||       ||     \n");
    printf("\t     ||       ||     \n");
    printf("\t     ||       ||     \n");
    printf("      =========================\n");
    printf("\t     ||       ||     \n");
    printf("\t     ||       ||     \n");
    printf("\t     ||       ||     \n");
    printf("      =========================\n");
    printf("\t     ||       ||     \n");
    printf("\t     ||       ||     \n");
    printf("\t     ||       ||     \n");
    
    printf("\n\n");
}

