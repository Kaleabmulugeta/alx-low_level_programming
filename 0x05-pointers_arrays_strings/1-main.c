#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	int b;

	a = 98;
	b = 42;
	printf("a = %i, b = %i\n", a, b);
	swap(&a, &b);
	printf("a = %i, b = %i\n", a, b);
	return (0);
}
