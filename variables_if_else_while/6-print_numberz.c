#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0.
 *
 * Return: always (O).
 *
 */

int main(void)
{
	int numberz;

	for (numberz = '0'; numberz <= '9'; numberz++)
	{
		putchar(numberz);
	}
	putchar('\n');
	return (0);
}
