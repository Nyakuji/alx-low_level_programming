#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _strdup -returns a pointer to duplicate string of str
* @str: string
* Return: pointer to duplicate string
*/
char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	/*allocation of memory for the duplicated string*/
	duplicate = (char *)malloc(strlen(str) + 1);

	if (duplicate == NULL)
	{
		return (NULL);
	}
	/*copy the string to newly allocated memory*/
	strcpy(duplicate, str);
	return (duplicate);
}
