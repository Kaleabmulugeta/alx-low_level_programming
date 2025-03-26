/**
 * guess_sqrt- Finds sqrt of a perfect square
 * @n: The number
 * @guess: First guess
 *
 * Return: sqrt for a perfect square, 0 for non perfects
 */
int guess_sqrt(int n, int guess)
{
	if (guess < 0)
		return (-1);
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
	{
		if ((guess - 1) * (guess - 1) < n)
			return (-1);
		return (guess_sqrt(n, guess - 1));
	}
	return (guess_sqrt(n, guess + 1));
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
	return (guess_sqrt(n, n / 2));
}
