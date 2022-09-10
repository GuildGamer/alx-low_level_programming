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
	int l;
	int comma = ',';
	int space = ' ';

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					if ((i  < k) || ((i + j) <  (k+ l)))
					{
					putchar(i);
					putchar(j);

					putchar(space);

					putchar(k);
					putchar(l);

					if ((i < '9' || j < '8') || (k < '9' || l < '9'))
					{
						putchar(comma);
						putchar(space);
					}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

