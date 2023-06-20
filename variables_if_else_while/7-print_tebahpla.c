#include <stdio.h>

/**
 * main - prints the alphabet in lowercase.
 *
 * Return: (0).
 */

int main(void)
{
	char mirror;

	for (mirror = 'z'; mirror >= 'a'; mirror--)
	{
		putchar(mirror);
	}
	putchar('\n');
	return (0);
}
