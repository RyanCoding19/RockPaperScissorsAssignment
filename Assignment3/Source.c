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
	else if (((strchr(player1, 'r', 'o', 'c', 'k', '\0')) && (strchr(player2, 's', 'c', 'i', 's', 's', 'o', 'r', 's', '\0')) || ((strchr(player1, 'p', 'a', 'p', 'e', 'r', '\0')) && (strchr(player2, 'r', 'o', 'c', 'k', '\0'))) || ((strchr(player1, 's', 'c', 'i', 's', 's', 'o', 'r', 's', '\0')) && (strchr(player2, 'p', 'a', 'p', 'e', 'r', '\0')))))
	{
		return "Player1";
	}
	else if (((strchr(player2, 'r', 'o', 'c', 'k', '\0')) && (strchr(player1, 's', 'c', 'i', 's', 's', 'o', 'r', 's', '\0')) || ((strchr(player2, 'p', 'a', 'p', 'e', 'r', '\0')) && (strchr(player1, 'r', 'o', 'c', 'k', '\0'))) || ((strchr(player2, 's', 'c', 'i', 's', 's', 'o', 'r', 's', '\0')) && (strchr(player1, 'p', 'a', 'p', 'e', 'r', '\0')))))
	{
		return "Player2";
	}
}

void printIntro()
{
	printf("/////////////////////////\n");
	printf("// ROCK PAPER SCISSORS //\n");
	printf("//         GAME        //\n");
	printf("/////////////////////////\n\n");
}

