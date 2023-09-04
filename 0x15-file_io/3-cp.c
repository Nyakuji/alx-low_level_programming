#include "main.h"

#define BUFSIZE 1024
/**
* error_exit - prints error and exit
* @code: integer
* @message: shows array of characters
*
* Return: no return.
*/
void error_exit(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
* main - checks the code.
* @argc: Number of arguments.
* @argv: Arguments
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	int from_fd, to_fd;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFSIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(from_fd, buffer, BUFSIZE)) > 0)
	{
		bytes_written = write(to_fd, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(from_fd) == -1 || close(to_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor\n");
		exit(100);
	}
	return (0);
}
