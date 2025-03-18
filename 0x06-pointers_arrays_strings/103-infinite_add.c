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
 * add_digits - Adds two digits and manages carry
 * @d1: First digit
 * @d2: Second digit
 * @carry: Pointer to carry variable
 *
 * Return: Sum of digits (single digit)
 */
char add_digits(char d1, char d2, int *carry)
{
	int sum = (d1 - '0') + (d2 - '0') + *carry;
	*carry = sum / 10;
	return (sum % 10) + '0';
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
	int i, j, k = 0, carry = 0;
	int l1 = len(n1), l2 = len(n2);
	char *longer, *shorter;

	if (size_r <= max(l1, l2) + 1)
		return (0);

	longer = (l1 >= l2) ? n1 : n2;
	shorter = (l1 >= l2) ? n2 : n1;
	i = len(longer) - 1;
	j = len(shorter) - 1;

	while (i >= 0)
	{
		r[k++] = (j >= 0) ? add_digits(longer[i--], shorter[j--], &carry)
						  : add_digits(longer[i--], '0', &carry);
	}

	if (carry)
		r[k++] = carry + '0';

	r[k] = '\0';
	rev_string(r);
	return (r);
}
