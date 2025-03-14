#include <stdio.h>

/**
 * len- Compute length of a string
 * @s: Pointer to the string
 *
 * Return: The length of the given string
 */
int len(char *s)
{
	char *sp = s;
	int length = 0;

	while (*sp != 0)
	{
		sp++;
		length++;
	}
	return (length);
}
/**
 * rev_string- Reverses a string
 * @s: Pointer to the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int leng = len(s);
	char tmp;

	for (i = 0; i < leng / 2; i++)
	{
		tmp = s[i];
		s[i] = s[leng - 1 - i];
		s[leng - 1 - i] = tmp;
	}
}
/**
 * max- Returns the bigger of two numbers
 * @n1: First num
 * @n2: Second num
 *
 * Return: Bigger num
 */
int max(int n1, int n2)
{
	if (n1 >= n2)
		return (n1);
	return (n2);
}
/**
 * infinite_add- Adds two numbers stored in strings and stores it in r
 * @n1: String containing the first number
 * @n2: String containing the second number
 * @r:  Storage place
 * @size_r: The size of r
 *
 * Return: Pointer to the output if OK; 0 if the storage space
 * can't store the sum
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int j;
	int k = 0;
	int l1 = len(n1);
	int l2 = len(n2);
	char *longer;
	char *shorter;
	int dig;
	int carry = 0;

	if (size_r <= max(l1, l2) + 1)
		return (0);
	if (l1 >= l2)
	{
		i = l1 - 1;
		j = l2 - 1;
		longer = n1;
		shorter = n2;
	}
	else
	{
		i = l2 - 1;
		j = l1 - 1;
		longer = n2;
		shorter = n1;
	}
	while (i >= 0)
	{
		if (j != -1)
		{
			dig = (((longer[i] + shorter[j] - 96) + carry)  % 10);
			carry = ((longer[i] + shorter[j] - 96) + carry) / 10;
			r[k] = dig + '0';
		}
		if (j == -1)
		{
			dig = (((longer[i] + '0' - 96) + carry)  % 10);
			carry = ((longer[i] + '0' - 96) + carry) / 10;
			r[k] = dig + '0';
		}
		if (i == 0 && carry != 0)
		{
			k++;
			r[k] = carry + '0';
		}
		k++;
		if (j != -1)
			j--;
		i--;
	}
	r[k] = 0;
	rev_string(r);
	return (r);
}
