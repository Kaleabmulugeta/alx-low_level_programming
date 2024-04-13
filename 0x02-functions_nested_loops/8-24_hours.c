#include "main.h"
/**
 * jack_bauer - check the code.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int hrs = 0;
	int mins = 0;

	while (hrs < 24)
	{
		mins = 0;
		while (mins < 60)
		{
			if (hrs < 10)
			{
				_putchar(48);
				_putchar(hrs + 48);
			}
			else
			{
				_putchar((int) (hrs / 10) + 48);
				_putchar((hrs % 10) + 48);
			}
			_putchar(':');
			if (mins < 10)
			{
				_putchar(48);
				_putchar(mins + 48);
			}
			else
			{
				_putchar((int) (mins / 10) + 48);
				_putchar((mins % 10) + 48);
			}
			mins++;
			_putchar('\n');
		}
		hrs++;
	}
}
