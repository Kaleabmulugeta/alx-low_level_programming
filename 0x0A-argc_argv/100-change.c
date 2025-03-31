#include <stdio.h>
#include <stdlib.h>

/**
 * main- Entry point
 * @argc: Arg count
 * @argv: Array of pointers pointing to the args
 *
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int i;
	int coin;
	int coins[] = {25, 10, 5, 2, 1};
	int count = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	coin = atoi(argv[1]);
	if (coin < 0)
	{
		printf("0\n");
		return (0);
	}
	while (coin > 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (coin >= coins[i])
			{
				coin -= coins[i];
				count++;
				break;
			}
		}
	}
	printf("%d\n", count);
	return (0);
}
