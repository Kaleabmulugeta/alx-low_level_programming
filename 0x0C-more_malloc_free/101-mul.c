#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _print- Print a string
 * @str: The string
 * Return: void
 */
void _print(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == '\\' || str[i] == '\n')
			continue;
		_putchar(str[i]);
	}
}

/**
 * len- Compute length of a string
 * @str: The string
 *
 * Return: Length
 */
int len(char *str)
{
	int l = 0;

	while (*str++ != 0)
		l++;
	return (l);
}

/**
 * command- Concatenate the command used to multiply two nums
 * @args: String containing the mathematical expression
 *
 * Return: The command
 */
char *command(char *args)
{
	int l = len(args), idx = 0, i;
	char *ret;
	char *c1 = "echo ";
	char *c2 = " | bc";

	ret = malloc((5 + l + 5) * sizeof(char));
	if (ret == NULL)
		exit(98);
	for (i = 0; i < 5; i++)
	{
		ret[idx] = c1[i];
		idx++;
	}
	for (i = 0; i < l; i++)
	{
		ret[idx] = args[i];
		idx++;
	}
	for (i = 0; i < 5; i++)
	{
		ret[idx] = c2[i];
		idx++;
	}
	return (ret);
}

/**
 * args- Compile math expression
 * @arg1: First num
 * @arg2: Second num
 *
 * Return: Math expression
 */
char *args(char *arg1, char *arg2)
{
	int l1 = len(arg1), l2 = len(arg2), i, idx = 0;
	char *ret;

	ret = malloc((l1 + l2 + 2) * sizeof(char));
	if (ret == NULL)
		exit(98);
	for (i = 0; i < l1; i++)
	{
		if (arg1[i] > '9' || arg1[i] < '0')
		{
			_print("Error");
			_putchar('\n');
			exit(98);
		}
		ret[idx] = arg1[i];
		idx++;
	}
	ret[idx++] = '*';
	for (i = 0; i < l2; i++)
	{
		if (arg2[i] > '9' || arg2[i] < '0')
		{
			_print("Error");
			_putchar('\n');
			exit(98);
		}
		ret[idx] = arg2[i];
		idx++;
	}
	ret[idx] = 0;
	return (ret);
}
/**
 * main- Entry point
 * @argc: Number of cli args
 * @argv: CLI args
 *
 * Return: status code
 */
int main(int argc, char *argv[])
{
	FILE *fp;
	char *res;
	char *ar;
	char *cmd;

	if (argc != 3)
	{
		_print("Error\n");
		_putchar('\n');
		exit(98);
	}
	res = malloc(101 * sizeof(char));
	if (res == NULL)
		exit(98);
	ar = args(argv[1], argv[2]);
	cmd = command(ar);
	fp = popen(cmd, "r");
	if (fp == NULL)
		exit(98);
	while (fgets(res, 100, fp) != NULL)
		_print(res);
	_putchar('\n');
	free(ar);
	free(res);
	free(cmd);
	return (0);
}
