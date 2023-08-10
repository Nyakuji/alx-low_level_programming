#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* string_nconcat - concatenates two strings
* @s1: first string
* @s2: second string
* @n: amount of memory bytes
* Return: pointer to newly allocated space in memory
* if malloc fails, status value is equal to 98
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;

	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= len2)
		n = len2;

	result = (char *)malloc(len1 + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	strncpy(result, s1, len1);
	strncpy(result + len1, s2, n);
	result[len1 + n] = '\0';

	return (result);
}
