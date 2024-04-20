#include <stdio.h>

/**
 * print_array - Prints an array
 * @a: pointer to the array
 * @n: number of elts to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n <= 0)
		return;
	while (i < n)
	{
		if (n - i != 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
		i++;
	}
}
