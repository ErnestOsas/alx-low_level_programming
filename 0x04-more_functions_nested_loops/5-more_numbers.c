#include "main.h"

/**
 * more_numbers - a function that prints ten times the numbers, from 0 to 14
 * _putchar can only be used three times
 * Return: 0-14 ten times followed by new line
 */
void more_numbers(void)
{
	int x, y;

	for (x = 1; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
				_putchar('1');
			_putchar (y % 10 + '0');
		}
		_putchar('\n');
	}
}
