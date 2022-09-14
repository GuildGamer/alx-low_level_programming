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
	int count = 2;

	printf("%d, ", 1);
	printf("%d, ", 2);
	while (count < 50)
	{
		seq = i + j;
		i = j;
		j = seq;
		if (count == 49)
		{
			printf("%d", seq);
		} else
		{
			printf("%d, ", seq);
		}
		count++;
	}
	printf("\n");

	return (0);
}
