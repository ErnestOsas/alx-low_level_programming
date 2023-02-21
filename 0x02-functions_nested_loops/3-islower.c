#include "main.h"
/**
 * _islower - tests whether a character is a
 * lowercase letter from the English alphabet.
 * Return: 1 if c is lowercase, 0 if it is not a lowercase letter.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
