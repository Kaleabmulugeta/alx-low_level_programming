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

	for (j = 0; j < 8; j++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar((*a)[i]);
		}
		a++;
		_putchar('\n');
	}
}

