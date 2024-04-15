#ifndef MAIN
#define MAIN
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 *
 * print_alphabet - print all letters.
 *
 * _islower - checks if a char is lowercase
 * _isalpha - checks if a char is a letter
 * print_sign - checks the sign of a num
 * _abs - absolute val
 * times_table - prints the time table 0 - 9
 */

int _putchar(char c);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int n);
void print_triangle(int size);
void print_number(int n);

#endif
