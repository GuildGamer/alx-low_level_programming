#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: 1
 */

int main(void)
{
	char str1[100] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf (stderr, "%s", str1);
	return (1);
}
