/**
 * is_prime- Checks primality
 * @n: The number to be checked
 * @factor: The starting factor
 *
 * Return: 1 if prime; 0 if not
 */
int is_prime(int n, int factor)
{
	if (factor == 1)
		return (1);
	if (n % factor == 0)
		return (0);
	return (1 && is_prime(n, factor - 1));
}
/**
 * is_prime_number- Checks number primality
 * @n: Number to be checked
 *
 * Return: 1 or 0 accordingly
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if ((n % 2 == 0) || n <= 1)
		return (0);
	return (is_prime(n, n - 1));
}
