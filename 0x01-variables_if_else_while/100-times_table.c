#include "main.h"


void print_times_table(int n)
{
        if (n < 0 || n > 15)
                return;
        int sp = 3;
        int inc = 0;
        int i;
        int j;
        int num = 0;
        int dig;

        for (i = 0; i <= n; i++)
        {
                sp = 3;
                num = 0;
                for (j = 0; j <= n; j++)
                {
                        if (num > 99)
                        {
                                sp = 1;
                                _putchar((num / 100) + 48);
                        }
                        if (num > 9)
                        {
                                if (num < 99)
                                        sp = 2;
                                dig = (num / 10) - ((num / 100) * 10);
                                _putchar(dig + 48);
                        }
                        _putchar((num % 10) + 48);
                        if (j != n)
                        {
                                _putchar(',');
                                if (sp == 3)
                                {
                                        _putchar(' ');
                                        _putchar(' ');
                                }
                                if (sp == 2)
