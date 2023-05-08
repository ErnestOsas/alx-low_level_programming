#include "main.h"
#include <stdio.h>

int close_error(int fd);
void read_error(char *filename);
void write_error(char *filename);

/**
 * main - copies the content of file to another.
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: return 0 always, or exit.
 */
int main(int argc, char *argv[])
{
char buffer[1024];
int fd_file_from = open(argv[1], O_RDONLY);
int fd_file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
ssize_t bytes_counted = 1;

if (argc != 3 || fd_file_from < 0 || fd_file_to < 0)
return (97 + (fd_file_from < 0) * 1 + (fd_file_to < 0) * 2);
while (bytes_counted)
{
bytes_counted = read(fd_file_from, buffer, 1024);
if (bytes_counted < 0 || write(fd_file_to, buffer, bytes_counted) < 0)
return (98 + (bytes_counted < 0) * 1 + (bytes_counted > 0 &&
write(fd_file_to, buffer, bytes_counted) < 0) * 2);
}
return ((close(fd_file_from) + close(fd_file_to)) * -1);
}

/**
 * close_error - close a file descriptor and check for a possible error.
 * @fd: file descriptor for file to be closed.
 * Return: 1 if fd colud be closeed, -1 if fd could not be closed.
 */
int close_error(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		return (-1);
	}
	return (1);
}

/**
 * read_error - print the read error.
 * @filename: filename.
 */
void read_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
}

/**
 * write_error - print the write error.
 * @filename: filename.
 */
void write_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
}
