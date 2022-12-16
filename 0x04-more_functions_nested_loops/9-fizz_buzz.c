#include <stdio.h>

/**
 * main - prints the number from 1-100 but multiples of three,
 * fizz is printed in place of the no, buzz in place of multiples,
 * of 5 and fizzBuzz for both five and three
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
	if ((n % 3) == 0 && (n % 5) == 0)
	{
	printf("FizzBuzz");
	}
	else if ((n % 3) == 0)
	{
	printf("fizz");
	}
	else if ((n % 5) == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("%d", n);
	}
	if (n == 100)
	{
	continue;
	}
	printf(" ")
	}
	printf("\n");
	return (0);
}
