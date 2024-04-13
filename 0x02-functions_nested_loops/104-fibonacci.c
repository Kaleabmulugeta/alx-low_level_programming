#include <stdio.h>

/**
 * fibonacci - check the code
 *
 * Return: Always 0.
 */
void fibonacci(void)
{
	int count;
	unsigned long fib1 = 1, fib2 = 2, sum;

	for (count = 0; count < 98; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 97)
			printf("\n");
		else
			printf(", ");
	}
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	fibonacci();
	return (0);
}
