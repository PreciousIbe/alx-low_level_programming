#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: number to be returned
 *
 * Return: -1 if n is lower to indicate error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
