#include <stdio.h>
/**
 * main - prints the first fibonacci numbers starting from 1 and 2
 * Return: 0 (Succesful)
 */
int main(void)
{
int count;
unsigned long fib1 = 0, fib2 = 1, num;
for (count = 0; count < 50; count++)
{
num = fib1 + fib2;
printf("%lu", num);
fib1 = fib2;
fib2 = num;
if (count == 49)
printf("\n");
else
printf(", ");
}
return (0);
} while (num < 50);
return (0);
}
