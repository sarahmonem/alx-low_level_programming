#include "main.h"

/**
 * _strlen_recursion - fuction to print string length
 *
 * @s: pointer string
 *
 * Return: Always return nothing
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
