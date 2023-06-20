#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: (0).
*/

int main(void)
{
	char hexa1;
	char hexa2;

	for (hexa1 = '0'; hexa1 <= '9'; hexa1++)
	{
		putchar(hexa1);
	}
	for (hexa2 = 'a'; hexa2 <= 'f'; hexa2++)
	{
		putchar(hexa2);
	}
	putchar('\n');
	return (0);
}
