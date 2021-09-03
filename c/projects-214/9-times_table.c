#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: Always 0
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (b != 0)
			{
				if (c <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(c % 10 + '0');
				}

				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(c / 10 + '0');
					_putchar(c % 10 + '0');
				}
			}

			else
			{
				if (c < 9)
				{
					_putchar(c + '0');
				}

				else
				{
					_putchar(c / 10 + '0');
					_putchar(c % 10 + '0');
				}
			}
		}

		_putchar('\n');
	}
}
