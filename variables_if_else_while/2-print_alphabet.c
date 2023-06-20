#include<stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Return: value(0).
 */

int main(void)
{
	char lettre;

	for (lettre = 'a' ; lettre <= 'z' ; lettre++)
	{
		putchar(lettre);
		putchar('\n');
	}
	return (0);
}

