#include <stdio.h>
/**
* main - prints the first 98 fibonacci numbers
* Return: 0  (Success)
*/
int main(void)
{
unsigned long int i;
unsigned long int fibY = 1;
unsigned long int fibX = 2;
unsigned long int l = 1000000000;
unsigned long int fibY1;
unsigned long int fibY2;
unsigned long int fibX1;
unsigned long int fibX2;
printf("%lu", fibY);
for (i = 1; i < 91; i++)
{
printf(", %lu", fibX);
fibX += fibY;
fibY = fibX - fibY;
}
fibY1 = (fibY / l);
fibY2 = (fibY % l);
fibX1 = (fibX / l);
fibX2 = (fibX % l);
for (i = 92; i < 99; ++i)
{
printf(", %lu", fibX1 + (fibX2 / l));
printf("%lu", fibX2 % l);
fibX1 = fibX1 + fibY1;
fibY1 = fibX1 - fibY1;
fibX2 = fibX2 + fibY2;
fibY2 = fibX2 - fibY2;
}
printf("\n");
return (0);
}
