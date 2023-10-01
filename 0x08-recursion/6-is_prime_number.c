#include "main.h"

/**
 * is_prime_number - function that returns 1 if the input integer is a prime
 *
 * @n: integer
 *
 * Return: return 1 if n is prime
 *
 */

int is_prime_number(int n)
{
	if (n == 1 || n < 0)
		return (0);
	else if (n % n == 0 && n / 1 == n)
		return (0);
	else
		return (0);
}
