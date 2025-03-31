#include <stdio.h>
#include <stdlib.h>

/**
 * main- Entry point
 * @argc: Number of args
 * @argv: Array of pointers to args
 *
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	printf("%d\n", n1 * n2);
	return (0);
}
