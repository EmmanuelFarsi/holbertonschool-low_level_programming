#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from input to 98,
 *               in order separated by a comma followed by a space.
 * @n: The number to begin counting at.
 */

void print_to_98(int n)
{

	for (n = 0; n <= 98; n++)
	{
		if (n >= 98)
		{
			printf("98");
			break;
		}
		else
			printf("%d, ", n);

	}
	putchar('\n');
}
