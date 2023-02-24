#include "main.h"

/**
 * more_numbers - a function that prints ten times the numbers, from 0 to 14
 * _putchar can only be used three times
 * Return: 0-14 ten times followed by new line
 */
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar (j % 10 + '0');
		}
		_putchar('\n');
	}
}
