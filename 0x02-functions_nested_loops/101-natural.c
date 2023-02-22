#include <stdio.h>
/**
 * main - prints the sum of all multiples of
 * 3 or 5 below 1024.
 * Return: 0 (Successful)
 */
int main(void)
{
int x, num;
for (x = 0; x < 1024; x++)
if (x % 3 == 0 || x % 5 == 0)
num += x;
printf("%d\n", num);
return (0);
}
