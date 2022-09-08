#include <stdio.h>
/**
 *main - print a string to standard error
 *Description: Using the main function
 *This program prints to stderr
 *Return: 0
 */
int main(void)
{
char m[100] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fprintf(stderr, "%s", m);
return (1);