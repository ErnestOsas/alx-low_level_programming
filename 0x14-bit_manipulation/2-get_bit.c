#include "main.h"
/**
 * get_bit - Entry Point
 * @n: input to search
 * @index: index
 * Return: the bit value
 */
int get_bit(unsigned long int n, unsigned int index) 
{
  return (index > 63) ? (int) -1 : (int) ((n >> index) & 1);
}
