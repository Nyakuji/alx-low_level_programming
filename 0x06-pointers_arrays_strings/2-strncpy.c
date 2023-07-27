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

	/*Copy at most n characters from source to destination*/
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	/*Add the terminating null byte*/
	*ptr = '\0';

	return (dest);
}
