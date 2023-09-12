#include <stdio.h>
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
	char str[] = "_putchar";
	int charac;

	for(charac = 0; charac < 8; charac++)
		_putchat(str[charac]);
	_putchar('\n');

	return(0);
}
