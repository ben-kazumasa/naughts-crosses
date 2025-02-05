/*
PROGRAM TO PLAY NAUGHTS AND CROSSES IN THE CONSOLE
MADE WITHOUT ANY GUIDE
05/02/2025
*/

#include <stdio.h>

void print_header();
void print_grid();

int main(void) 
{
    print_grid();
}

void print_header() 
{
    // Name of the game
    printf("\t NAUGHTS AND CROSSES\n");
    printf("\t*********************\n\n\n");
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

