#include "main.h"

/**
 * print_chessboard- Prints a chess board
 * @a: A 2D array representing a board
 *
 * Return: Void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 7; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}

