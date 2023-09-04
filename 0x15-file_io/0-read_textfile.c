#include "main.h"

/**
* read_textfile - Reads a text file and prints it to the POSIX standard
* output.
* @filename: The filename
* @letters: The number of letters it should read and print.
*
* Return: The actual number of letters it could read and print.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytesRead, bytesWritten;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	bytesRead = read(fd, buffer, letters);

	if (bytesRead == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	if (bytesWritten == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close (fd);
	free(buffer);
	return (bytesWritten);
}
