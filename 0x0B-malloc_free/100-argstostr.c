#include <stdlib.h>

/**
 * len- Compute length of a string
 * @str: The string
 *
 * Return: The length
 */
int len(char *str)
{
	int ret = 0;
	char *cp = str;

	while (*cp != 0)
	{
		ret++;
		cp++;
	}
	return (ret);
}

/**
 * argstostr- Concatenate all args to one string
 * @ac: Number of args
 * @av: Array of the args
 *
 * Return: pointer to final string
 */
char *argstostr(int ac, char **av)
{
	char *addr;
	int total = 0;
	int idx = 0;
	int i, cl, j;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		total += len(av[i]);
	addr = (char *)malloc((total + 1 + ac) * sizeof(char));
	for (i = 0; i < ac; i++)
	{
		cl = len(av[i]);
		for (j = 0; j < cl; j++)
		{
			addr[idx] = av[i][j];
			idx++;
		}
		addr[idx] = '\n';
		idx++;
	}
	addr[total + ac] = 0;
	return (addr);
}
