#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int min = 97;
	int max = 122;
	int random_n;
	char ret[30];
	int checksum = 0;
	int i = 0;
	
	srand(time(NULL));
	while (checksum < 2650)
	{
		random_n = min + rand() % (max - min + 1);
		ret[i] = random_n;
		i++;
		checksum += random_n;
	}
	ret[i] = 2772 - checksum;
	ret[i + 1] = '\0';
	printf("%s", ret);
	return (0);
}
