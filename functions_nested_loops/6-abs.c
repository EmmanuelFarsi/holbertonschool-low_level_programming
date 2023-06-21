#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @absolu: The integer to be computed.
 *
 * Return: The absolute value of the integer.
 */

int _abs(int absolu)
{
	if (absolu >= 0)
	{
		return (absolu);
	}
	else
		return (absolu * -1);
}
