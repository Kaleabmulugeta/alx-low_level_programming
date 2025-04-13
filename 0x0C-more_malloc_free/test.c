#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char buf[128];
	FILE *fp;

	fp = popen("echo \"2 * 3\" | bc", "r");
	if (fp == NULL)
	{
		printf("Error\n");
		return 1;
	}
	while (fgets(buf, sizeof(buf), fp) != NULL)
		printf("%s", buf);
	//putchar('\n');
}
