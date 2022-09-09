#include <stdio.h>

/**
 *main - prints alphabet
 *Description: Using the main function
 *This program prints to stderr
 *Return: 0
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}

