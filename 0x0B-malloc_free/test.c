#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *r = (int *)malloc(12 * sizeof(int));
	if (r == NULL)
		return (1);
	for (int i = 0; i < 12; i++)
	{
			r[i] = 0;
	}
	printf("Allocated\n");
	int **pr = (int **)r;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("%d\n", pr[i][j]);
	}
}
