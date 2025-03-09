/**
 * reverse_array- Reverses an array of ints
 * @a: Pointer to the array of ints
 * @n: The number of elements in the array
 *
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
