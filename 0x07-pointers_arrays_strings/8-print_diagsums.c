#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sumof two diagonals of a square
 * @a: pointer to array
 * @size: size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, size1;
	unsigned int sunDiag1, sunDiag2;

	size1 = 0;
	sumDiag1 = 0;
	sumDiag2 = 0;

	size1 = (size * size) - 1;

	for (i = 0; i <= size1; i = i + (size + 1))
	{
		sumDiag1 = sumDiag1 + a[i];
	}
	for (i = (size - 1); i < size1; i = i + (size - 1))
	{
		sumDiag2 = sumDiag2 + a[i];
	}
	printf("%d, %d\n", sunDiag1, sumDiag2);
}

