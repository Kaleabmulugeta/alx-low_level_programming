#include <stdio.h>

/**
 * fibonacci - check the code
 *
 * Return: Always 0.
 */
void fibonacci(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long tot = 0;

	while (1)
	{
		sum = fib1 + fib2;
		if (sum > 4000000)
			break;
		if (sum % 2 == 0)
			tot += sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%li\n", tot);
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
