#include "main.h"

/**
 * _print_rev_recursion - function to print a string in reverse
 *
 * @s: pointer string
 *
 * Return: Always return nothing
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
