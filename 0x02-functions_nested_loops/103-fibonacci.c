#include "main.h"
#include <stdio.h>

/**
 * main - Prints all natural numbers from input to 98,
 * in order separated by a comma followed by a space.
 * Return: 0
 */

int main(void)
{
	int i = 1;
	int j = 2;
	int seq = 0;
	int sum = 0;

	while (seq <= 4000000)
	{
		if (seq % 2 == 0)
		{
			sum += seq;
		}

		seq = i + j;
		i = j;
		j = seq;
	}

	printf("%d\n", sum + 2);

	return (0);
}
