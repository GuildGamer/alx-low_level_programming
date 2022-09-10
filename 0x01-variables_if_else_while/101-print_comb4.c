#include <stdio.h>

/**
 *main - prints alphabet
 *Description: Using the main function
 *This program prints to stderr
 *Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int comma = ',';
	int space = ' ';

	for (i = '0'; i <= '7'; i++)
	{
		for (j = '1'; j <= '8'; j++)
		{

			for (k = '2'; k <= '9'; k++)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (i < '7' || j < '8' || k < '9')
					{
						putchar(comma);
						putchar(space);
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}


