#include <stdio.h>

/**
 * main- Entry point
 * @argc: Number of arguments
 * @argv: Array of pointers pointing to the args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
