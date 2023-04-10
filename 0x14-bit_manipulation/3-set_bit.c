#include "main.h"
/**
 * set_bit - sets bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of bit set to 1
 *
 * Return: 1 (success), -1 for (fail)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= (1UL << index);
	return (1);
}
