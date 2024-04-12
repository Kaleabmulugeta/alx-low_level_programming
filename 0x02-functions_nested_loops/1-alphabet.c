#include "main.h"

/**
 * print_alphabet - writes all lower case chars
 *
 * Return: void
 */
void print_alphabet(void)
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
