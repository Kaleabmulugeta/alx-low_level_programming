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
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int n);
int print_last_digit(int n);
void jack_bauer(void);
void times_table(void);
int add(int x, int y);
void print_to_98(int n);
void print_times_table(int n);

#endif
