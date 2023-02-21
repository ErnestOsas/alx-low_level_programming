#include "main.h"
/**
* _islower - tests if a character is in lowercase from the English alphabet
* @c: is the char to be checked
* Return: 1 if char is lowercase, otherwise 0.
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
