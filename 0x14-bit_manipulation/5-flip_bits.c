#include "main."
/**
 * flip_bits - counts the number of bits to change
 * to move from one number to another number
 * @n: 1st number
 * @m: 2nd number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int especial = n ^ m;
	unsigned int count = 0;

	while (especial > 0)
	{
		count += especial & 1;
		especial >>= 1;
	}
	return (count);
}
