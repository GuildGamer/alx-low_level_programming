#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: 1
 */

int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write (2, str1, sizeof(str1));
	return (1);
}
