#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
			continue;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			if (i != 100)
				putchar(' ');
			continue;
		}
		else
		{
			printf("%i", i);
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
