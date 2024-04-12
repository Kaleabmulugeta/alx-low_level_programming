#include "main.h"
/**
 * main - Entry point
 *
 * Return: On success 0.
 * On error, 1 is returned, and errno is set appropriately.
 */
int main(void)
{
	int cha = 97;
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(cha);
		cha++;
	}
	_putchar('\n');
	return (0);
}
