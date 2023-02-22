#include <stdio.h>
/**
 * main - prints the first fibonacci numbers starting from 1 and 2
 * Return: 0 (Succesful)
 */
int main(void)
{
int num = 1;
do {
printf("%d\n", num);
num++;
} while (num < 50);
return (0);
}
