#include "main.h"

/**
* _strcmp - compare the first string with second string.
* @s1: shows first string
* @s2: shows second string
* Return: 0 if they are equal, another number if not
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return ((*s1 < *s2) ? -1 : 1);
		}
		s1++;
		s2++;
	}
	return ((*s1 == *s2) ? 0 : ((*s1 < *s2) ? -1 : 1));
}
