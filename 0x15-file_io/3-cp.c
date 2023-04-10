#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
/**
 * create_buffer - Assigns 1024 bytes for a buffer.
 * @file: The name the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-assigned buffer.
 */
char *create_buffer(char *file) 
{
char *buffer = malloc(1024);

if (!buffer) exit(dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file), 99);
return buffer;
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd) 
{
if (close(fd) == -1) exit(dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), 100);
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments given to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 (success).
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from doesn.t exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
#define ERR(F,C) if ((C)) {dprintf(STDERR_FILENO, F, ##__VA_ARGS__); exit(C);}

char *create_buffer(char *file) 
{
return malloc(1024);
}

void close_file(int fd) 
{
ERR("Error: Can't close fd %d\n", close(fd), 100);
}
int main(int argc, char *argv[]) 
{
int from = 0, to = 0, r = 0, w = 0;

ERR("Usage: cp file_from file_to\n", argc != 3, 97);
char *buffer = create_buffer(argv[2]);
ERR("Error: Can't read from file %s\n",
(from = open(argv[1], O_RDONLY)) == -1, 98);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do 
{
ERR("Error: Can't write to %s\n",
(to == -1 || (w = write(to, buffer,)) == -1)99);
r = read(from, buffer, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);
}
while (r > 0);
close_file(from);
close_file(to);
free(buffer);
return 0;
}
