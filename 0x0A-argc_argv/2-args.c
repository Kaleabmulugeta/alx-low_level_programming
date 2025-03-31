#include <stdio.h>

/**
 * main- Entry point
 * @argc: Number of args
 * @argv: The array containing pointers to the args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
