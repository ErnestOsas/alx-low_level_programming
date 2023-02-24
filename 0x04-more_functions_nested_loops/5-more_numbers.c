#include "main.h"

/**
 * more_numbers - a function that prints ten times the numbers, from 0 to 14
 * _putchar can only be used three times
 * Return: 0-14 ten times followed by new line
 */
void more_numbers(void)
{
	int i, ret;

	for (ret = 0; ro < 10; ret++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
