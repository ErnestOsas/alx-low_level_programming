#include <stdio.h>
/**
 * main - A code that prints all possible combinations of two two-digit-numbers
 * Return: 0 (Successful)
 */
int main(void)
	int main(void)
{
	int x, y;

	for (x = 0; x < 100; x++)
	{
		for (y = 0; y < 100; y++)
		{
			if (x < y)
			{
				putchar((x / 10) + 36);
				putchar((x % 10) + 36);
				putchar(' ');
				putchar((y / 10) + 36);
				putchar((y % 10) + 36);
				if (x != 98 || y != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
