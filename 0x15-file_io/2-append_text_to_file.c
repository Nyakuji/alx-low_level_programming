#include "main.h"

/**
* append_text_to_file - Appends text at the end of a file.
* @filename: The name of the file.
* @text_content: The NULL terminated string to add at the end of the file.
*
* Return: 1 on success and -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int text_len = 0, fd;
	ssize_t bytesWritten;

	if (filename == NULL || text_content == NULL)
		return (-1);

	/* open the file in append mode */
	fd = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0600);

	/* check if the file couldn't open */
	if (fd == -1)
		return (-1);

	/* calculate the length of the text_content */
	while (text_content[text_len] != '\0')
	{
		text_len++;
	}

	/* write the text_content to the file */
	bytesWritten = write(fd, text_content, text_len);

	/* check if an error occurred  while writing */
	if (bytesWritten == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd); /* close the file */

	return (1);
}

