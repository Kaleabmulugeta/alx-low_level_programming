#include "main.h"

/**
 * print_alphabet_x10 - writes all lower case chars
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		int cha = 97;
		int i;

		for (i = 0; i < 26; i++)
		{
			_putchar(cha);
			cha++;
		}
		_putchar('\n');
	}
}
