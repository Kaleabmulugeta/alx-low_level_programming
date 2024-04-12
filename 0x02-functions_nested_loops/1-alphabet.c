#include "main.h"
/**
 * main - Entry point
 *
 * Return: On success 0.
 * On error, 1 is returned, and errno is set appropriately.
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}

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
