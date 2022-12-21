#include "main.h"
#include <stdio.h>

/**
 * point_array - prints n element of an array of integers, followed by \
 * a new line
 * @a: array to be printed
 * @n: number of element in array
 *
 * Return: nothing on success
 */

void print_array(int *a, int n)

{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	putchar('\n');
}
