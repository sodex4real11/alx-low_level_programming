#include "main.h"
/**
 * _print_rev_recursion - print a string in reverse
 * @s: string
 * Return: No return
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursions(s + 1);
		_putchar(*s);
	}
}
