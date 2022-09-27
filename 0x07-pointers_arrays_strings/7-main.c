#include "main.h"

/**
 * main - checks code
 * Return: always 0
 */

int main(void)
{
	char board[8][8] = {
		{'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
		{'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
	};
	print_chessboard(board);
	return (0);
}
