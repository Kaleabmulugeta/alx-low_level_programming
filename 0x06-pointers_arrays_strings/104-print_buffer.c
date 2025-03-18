#include <stdio.h>
void print_buffer(char *b, int size)
{
	int i = 0;
	int j;
	int line = 0;
	int addr = 0;
	int st = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (i <= size)
	{
		printf("%08x: ", addr);
		addr += 10;
		for (j = st; j < 10; j++)
		{
			printf("%x%x %x%x", b[j], b[j +1], b[j + 2], b[j + 3] );
		
		}
	}
}
