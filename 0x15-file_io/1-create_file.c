#include "main.h"
/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: -1 if the function fails.
 * Otherwise 1.
 */
int create_file(const char *filename, char *text_content)
{
int o, w, len = 0;

if (!filename)
return (-1);
if (text_content)
{
while (text_content[len])
len++;
}
o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (o == -1)
return (-1);
w = write(o, text_content, len);
close(o);
if (w == -1)
return (-1);
return (1);
}
