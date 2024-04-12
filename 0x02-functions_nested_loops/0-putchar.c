#include "main.h"

/**
 * main - Entry point
 *
 * Return: On success 0.
 * On error, 1 is returned, and errno is set appropriately.
 */
int main(void)
{
	char str[9] = "_putchar\0";
	int i = 0;
	
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
