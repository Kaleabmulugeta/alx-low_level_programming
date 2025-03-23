#include <stdio.h>

/**
 * print_diagsums- Prints the sum of the diagonals of a square matrix
 * @a: Array created by casting a 2D array to a 1D array
 * @size: Size of the square matrix
 *
 * Return: Void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int inc = size + 1;
	int sum = 0, idx = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[idx];
		idx += inc;
	}
	printf("%d, ", sum);
	inc = size - 1;
	idx = size - 1;
	sum = 0;
	for (i = 0; i < size; i++)
	{
		sum += a[idx];
		idx += inc;
	}
	printf("%d\n", sum);
}
