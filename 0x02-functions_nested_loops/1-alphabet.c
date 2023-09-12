#include <stdio>
#include "main.h"

/**
 * main- entry point
 *
 * Description: print _putchar
 *
 * Return: Alway 0 (success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z', ch++)
		print_alphabet(_putchar(ch));
	_putchar ('\n');

	return (0);
}
