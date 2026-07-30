/*
 * memory_leak.c
 *
 * Created on: Jul 30, 2026
 * Author: josab
 *
 * OVERVIEW:
 * Simple console-based betting game where the computer shuffles three cards:
 * Jack ('J'), Queen ('Q'), and King ('K'). The player starts with an initial
 * balance and places a bet on where they believe the Queen is located.
 * - Winning: Guessing the correct position of the Queen rewards 3x the bet.
 * - Losing: Guessing incorrectly deducts the bet amount.
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*
 * GLOBAL VARIABLES
 * cash: Tracks the player's total available money. Initialized to $100.
 * It is modified globally by the Play function.
 */
int cash = 100;

void wait_for_usr(void);

/*
 * FUNCTION: Play
 * -------------------
 * Handles the core logic for a single round of the game, including card
 * shuffling, user guessing, and updating the player's balance.
 *
 * Parameters:
 *   bet (int): The amount of money the player is wagering on this round.
 *
 * Notes on Code Quality:
 * - Allocates 10,000 bytes for a 3-character game (highly inefficient).
 * - srand() is called inside the function, which can lead to identical random
 *   number seeds if called multiple times within the same second.
 */
void Play(int bet){
    // Allocate memory for the cards
    char *C = (char*)malloc(10000*sizeof(char)); // c++ :  char *C = new char[3];

    // Initialize the three cards
    C[0] = 'J'; C[1] = 'Q'; C[2] = 'K';
    printf("Shuffling ...\n");

    // Seed random number generator
    srand(time(NULL));

    int i;
    // Shuffle the cards 5 times by swapping random positions
    for(i = 0;i<5;i++) {
        int x = rand() % 3;
        int y = rand() % 3;
        int temp = C[x];
        C[x] = C[y];
        C[y] = temp; // swaps characters at position x and y
    }

    int playersGuess;

    // Prompt user for their guess
    printf("What's the position of queen - 1,2 or 3?  ");
    scanf("%d",&playersGuess); // Note: Lacks bounds checking for inputs outside 1-3

    // Evaluate the guess and update global cash balance
    if(C[playersGuess - 1] == 'Q') {
        cash += 3*bet;
        printf("You Win ! Result = \"%c %c %c\" Total Cash=  $%d\n",C[0],C[1],C[2],cash);
    }
    else {
        cash -= bet;
        printf("You Loose ! Result = \"%c %c %c\" Total Cash=  $%d\n",C[0],C[1],C[2],cash);
    }

    // Clean up dynamically allocated memory to prevent actual memory leaks
    free(C);
}

/*
 * FUNCTION: main
 * -------------------
 * The entry point of the program. Handles the main game loop, user input
 * for betting, and evaluates when the game should terminate.
 */
int main(void) {
    int bet;

    // Welcome screen and initial balance display
    printf("Welcome to the Virtual Casino\n");
    printf("Total cash = $%d\n",cash);

    // Main game loop: continues as long as the player is not bankrupt
    while(cash > 0 ) {
        printf("What's your bet? $");
        scanf("%d",&bet);

        // Exit condition: bet is 0 or player bets more money than they have
        if(bet == 0 || bet > cash) break;

        // Execute a single betting round
        Play(bet);
    }

    // Pause execution before closing the console window
    wait_for_usr();
}

/*
 * FUNCTION: wait_for_usr
 * -------------------
 * A utility function used to halt the program's execution at the end
 * so the user can read the final output before the console window closes.
 */
void wait_for_usr(void)
{
	printf("Click On Enter to Exit the PROGRAM\n");

	// Flush any lingering newline characters from the input buffer
	while(getchar()!= '\n')
	{

	}

	// Wait for the final Enter key press
	getchar();
}
