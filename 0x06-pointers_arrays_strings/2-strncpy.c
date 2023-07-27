#include "main.h"

/**
* _strncpy - copy source string to destination string
* @dest: shows destination
* @src: shows source
* @n: shows integer
* Return: (dest)
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	/*Move the pointer to the end of the destination string*/
	while (*ptr != '\0')
	{
		ptr++;
	}
	/*Append at most n characters from the source to the destination*/
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	/*add the terminating null byte*/
	*ptr = '\0';

	return (dest);
}
