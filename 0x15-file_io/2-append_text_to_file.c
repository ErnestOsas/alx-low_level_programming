#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: minus 1 If the function fails or filename is NULL.
 * If the file doesn't exist or user lacks write permissions (return - 1).
 * Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, len = 0;

if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[len])
len++;
if (write(fd, text_content, len) != len)
return (-1);
}
close(fd);
return (1);
}