#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 *
 * Description: Print all possible different combinations of three digits.
 *
 * Return: (0)
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 99; a++)
	{
		for (b = a + 1; b < 100; b++)
		{
			putchar('0' + (a / 10));
			putchar('0' + (a % 10));
			putchar(' ');
			putchar('0' + (b / 10));
			putchar('0' + (b % 10));

			if (a / 10 != 9 || b % 10 != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
