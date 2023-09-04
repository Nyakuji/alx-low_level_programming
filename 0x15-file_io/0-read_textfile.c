#include "main.h"

/**
* read_textfile - Reads a text file and prints it to the POSIX standard
i* output.
* @filename: The filename
* @letters: The number of letters it should read and print.
*
* Return: The actual number of letters it could read and print.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytesRead, bytesWrite;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY); /* open the file for readin */

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
	{
		return (0);
	}

	bytesRead = read(fd, buffer,  letters);
	bytesWrite = write(STDOUT_FILENO, buffer, bytesRead);

	close(fd); /* Close the file */
	free(buffer);
	return (bytesRead);
}
