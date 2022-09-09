#include <stdio.h>

/**
 *main - prints numbers
 *Description: Using the main function
 *This program prints to stderr
 *Return: 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}

