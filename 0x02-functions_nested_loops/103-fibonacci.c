#include <stdio.h>

int main(void)
{
	int fibs[50];
	int i;
	long int sum = 0;

	fibs[0] = 1;
	fibs[1] = 2;
	for (i = 2; i < 50; i++)
	{
		fibs[i] = fibs[i - 1] + fibs[i - 2];
	}
	for (i = 0; i < 50; i++)
	{
		if (fibs[i] > 4000000)
			break;
		if ((fibs[i] % 2 == 0))
		{
			sum += fibs[i];
		}
	}
	printf("%li\n", sum);
}
