#include <stdio.h>
#include "main.h"

/**
 * main- entry point
 * 
 * Description: print _isupper
 *
 *
 *
 * Return: Alway 0 (success)
 */

int _isupper(int ch)
{
	if (ch >= 65 && ch <= 90)
		return(1);
	else
		return(0);
}
