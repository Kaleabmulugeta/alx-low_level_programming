#include "main.h"

/**
 * swap - swaps the value of two integers
 * @a: Int pointer 1
 * @b: Int pointer 2
 *
 * Return: void
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
