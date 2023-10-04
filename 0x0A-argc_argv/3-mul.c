#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 *
 * @argc: int
 *
 * @argv: char
 *
 * Return: Always return 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			sum = atoi(argv[i]) * atoi(argv[i + 1]);
			printf("%d\n", sum);
		}
	}
	else
	{
		printf("Error\n");
	}

	return (1);
}
