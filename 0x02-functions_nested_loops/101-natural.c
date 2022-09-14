#include "main.h"
#include <stdio.h>

/**
 * print_space - Prints all natural numbers from input to 98,
 * in order separated by a comma followed by a space.
 * @n: The number to begin counting at.
 */

int main()
{   
    for(int i = 0; i < 1024; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
