#include "main.h"
/**
 * print_sign - Determines whether an integer is positive, negative or zero.
 * @n: the number to be checked.
 * Return: 1 (positive), 0 (zero), -1 (negative), / if it is not a digit.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}