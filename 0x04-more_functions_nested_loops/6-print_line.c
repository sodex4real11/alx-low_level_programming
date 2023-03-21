#include "main.h"

/**
 * print_line - draws a straight line using a character _
 * @n: the number of _ character to be printed out
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
