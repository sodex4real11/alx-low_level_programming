#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	printf("infinite loop incoming :(\n");
	i = 0;

	while (i < 10)
	{
		putchar(i);
	}

	printf("infinite loop avoided! \\o/\n");
	Return (0);
}
