#include "main.h"
#include <stdio.h>
/**
 * FizzBuzz - For any number divisible by 3 print Fizz
 * For any number divisible by 5 print Buzz
 * For any number divisible by both 3 & 5 print FizzBuzz
 * The % operator is important in this program
 * Return: 0 (Successful)
 */
int main(void)
{
	int j;

	for (j = 1; j <= 100; j++)
	{

		if (j % 3 == 0 && j % 5 != 0)
		{
			printf("Fizz\n");
		}
		else if (j % 5 == 0 && j % 3 != 0)
		{
			printf("Buzz\n");
		}
		else if (j % 3 == 0 && j % 5 == 0)
		{
			printf("FizzBuzz\n");
		}
		else if (j == 1)
		{
			printf("%d\n", j);
		}
		else
		{
			printf("%d\n", j);
		}
	}
	return (0);
}
