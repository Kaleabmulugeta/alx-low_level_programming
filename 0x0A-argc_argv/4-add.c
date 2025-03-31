#include <stdio.h>
#define NULL ((void *)0)
/**
 * _pow- Exponentiate
 * * @exp: the exponent
 *
 * Return: The final output
 */
int _pow(int exp)
{
	int ret = 1;
	int i;

	for (i = 0; i < exp; i++)
		ret *= 10;
	return (ret);
}
/**
 * _atoi- ASCII to int
 * @s: String pointer
 * @ptr: Pointer to storage space
 *
 * Return: The int
 */
int *_atoi(char *s, int *ptr)
{
	unsigned int ret = 0;
	int i;
	int lenn = 0;
	char *cp = s;
	int sign = 1;

	while (*cp != 0)
	{
		lenn++;
		cp++;
	}
	if (s[0] == '-')
		sign = -1;
	for (i = 0; i < lenn; i++)
	{
		if (sign == -1)
			continue;
		if (s[i] > '9' || s[i] < '0')
		{
			ptr = NULL;
			return (ptr);
		}
		ret += (s[i] - 48) * (_pow(lenn - i - 1));
	}
	*ptr = ret * sign;
	return (ptr);
}

/**
 * main- Entry point
 * @argc: arg count
 * @argv: Array of pointers pointing to the args
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int x;
	int *c;
	int i;
	int sum = 0;

	if (!(argc > 1))
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		c = _atoi(argv[i], &x);
		if (c != NULL)
			sum += *c;
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
