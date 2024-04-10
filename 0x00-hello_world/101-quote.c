#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: ALways 1
 */
int main(void)
{
	char str[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i = 0;
	char c = '\n';

	while (str[i] != '\0')
	{
		write(STDOUT_FILENO, &str[i], 1);
		i++;
	}
	write(STDOUT_FILENO, &c, 1);
	return (1);
}
