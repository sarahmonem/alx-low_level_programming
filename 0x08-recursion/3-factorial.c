#include "main.h"

/**
 * factorial - function print factorial of number
 *
 * @n: pointer integer
 *
 * Return: Return integer
 */

int factorial(int n)
{
	if (n == 0)
		return (0);
	else
		return (n * factorial(n - 1));
}
