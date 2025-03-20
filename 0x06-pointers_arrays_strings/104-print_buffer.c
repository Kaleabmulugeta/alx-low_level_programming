#include <stdio.h>

/**
 * print_nsp- prints n spaces
 * @n: The number of spaces to print
 *
 * Return: void
 */
void print_nsp(int n)
{
	int i;

	for (i = 0; i < n; i++)
		putchar(' ');
}

/**
 * print_buffer- Prints the sepecified amount of bytes from a buffer
 * @b: the buffer
 * @size: number of bytes to print
 *
 * Return: Void
 */
void print_buffer(char *b, int size)
{
	int i, j;
	int lc = 0, idx = 0, idx2 = 0;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		while (lc < 10)
		{
			if (idx == size)
				return;
			printf("%08x: ", idx);
			for (j = 0; j < 10; j++)
			{
				if (idx == size)
					break;
				printf("%02x", b[idx]);
				if (j % 2)
					putchar(' ');
				idx++;
			}
			if (j < 10)
				print_nsp((20 - (2 * j) + ((10 - j) / 2)) + 1);
			for (j = 0; j < 10; j++)
			{
				if (idx2 == size)
					break;
				if (b[idx2] >= 32 && b[idx2] <= 126)
					putchar(b[idx2]);
				else
					putchar('.');
				idx2++;
			}
			putchar('\n');
			lc++;
		}
		lc = 0;
	}
}
