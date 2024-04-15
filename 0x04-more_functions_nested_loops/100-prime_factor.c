#include <stdio.h>
#include <math.h>
/**
 * isprime - checks if a long is prime
 * @num: long
 *
 * Return: 1 if prime
 */
int isprime(long num)
{
	int sr = sqrt(num);
	int i;

	for (i = 3; i < sr; i += 2)
	{
		if (num % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long num = 612852475143;
	unsigned long sr = sqrt(num);
	unsigned long i = 3;
	unsigned long tmp = 0;
	unsigned long x;

	while (i < sr)
	{
		if (num % i == 0 && i > tmp)
		{
			tmp = i;
		}
		i += 2;
	}
	x = (long) num / tmp;
	if (isprime(x) == 1)
		printf("%li\n", x);
	return (0);
}
