#include "main.h"

/**
 * print_line - Uses a number to print a line
 * 
 * @n - number of lines to print
 *
 * Return : void
 */

void print_line(int n)
{
	int i = 0;

	while ( i < n && n > 0)
	{
		_putchar('_');
		i++;
	}

	_putchar('\n');
}
