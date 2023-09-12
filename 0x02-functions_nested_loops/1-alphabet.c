#include "main.h"

/**
 * main- entry point
 *
 * Description: print _putchar
 *
 * Return: Alway 0 (success)
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
