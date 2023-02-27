#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by the src
 * @dest: This is destination to copy to
 * @src: This is the source to copy from
 *
 * Return: a string
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
