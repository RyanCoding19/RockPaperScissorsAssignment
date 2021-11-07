// Assignment 3 - november 2021
// Ryan W
// CSCN71020
// This project rellies on one function to perform a game of rock paper scissors and I have to use TTD to check and solve it.


#include "main.h"

int main()
{
	printIntro();
	return 0;
}

char* actualGame(char* player1, char* player2)
{

	if (strcmp(player1, player2) == 0)
	{
		return "Draw";
	}
}

void printIntro()
{
	printf("/////////////////////////\n");
	printf("// ROCK PAPER SCISSORS //\n");
	printf("//         GAME        //\n");
	printf("/////////////////////////\n\n");
}

