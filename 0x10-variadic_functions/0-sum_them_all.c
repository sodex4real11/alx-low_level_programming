#include "variadic_functions.h"

/**
 * sum_them_all - sums of all its parameters.
 * @n: number of parameters
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list valist;
	
	if (n == 0)
		return (0);

	if (n == 0)
		return (0);

	va_start(valist, n);
<<<<<<< HEAD

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

=======
	
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	
	va_end(valist);
	
>>>>>>> c705d5d24a8bcd401f84a49497eca2a912bdde81
	return (sum);
}
