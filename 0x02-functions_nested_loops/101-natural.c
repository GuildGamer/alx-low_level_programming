#include "main.h"
#include <stdio.h>

/**
 * main - Prints all natural numbers from input to 98,
 * in order separated by a comma followed by a space.
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
