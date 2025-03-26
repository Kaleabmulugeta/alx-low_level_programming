#include <stdio.h>
/**
 * guess_sqrt- Finds sqrt of a perfect square
 * @n: The number
 * @low: Lower bound
 * @high: Upper bound
 *
 * Return: sqrt for a perfect square, 0 for non perfects
 */
int guess_sqrt(int n, int low, int high)
{
	int mid = low + ((high - low) / 2);

	if (low > high)
		return (-1);
	if (mid * mid == n)
		return (mid);
	if (mid * mid > n)
		return (guess_sqrt(n, low, mid - 1));
	return (guess_sqrt(n, mid + 1, high));
}
/**
 * _sqrt_recursion- Finds sqrt recursively for perfect square numbers
 * @n: The number
 *
 * Return: The sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (guess_sqrt(n, 0, n));
}
