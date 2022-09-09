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
	char comma = ',';
	char space = ' ';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		
		if (i < '9')
		{
			putchar(comma);
			putchar(space);
		}
	}

	putchar('\n');

	return (0);
}


