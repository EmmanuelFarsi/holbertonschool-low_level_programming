#include <stdio.h>

/**
 * main - prints lowercase alphabet except q and e.
 *
 * Return: always (0).
 */

int main(void)
{
	char exception = 'a';

	while (exception <= 'z')
	{
		if ((exception != 'e') && (exception != 'q'))
		{
			putchar(exception);
		}
		exception++;
	}
	putchar('\n');
	return (0);
}
