#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* argstostr - concatenates all the arguments of a program
* @ac: argument count
* @av: argument vector
* Return: pointer to a new string/NULL if it fails
*/
char *argstostr(int ac, char **av)
{
	char *result;

	int total_length, current_pos, i;

	if (ac == 0 || av == NULL)
	{ return (NULL);
	}
	total_length = 0;

	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}
	result = (char *)malloc(total_length + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	current_pos = 0;

	for (i = 0; i < ac; i++)
	{
		strcpy(result + current_pos, av[i]);
		current_pos += strlen(av[i]);
		result[current_pos] = '\n';
		current_pos++;
	}
	result[current_pos + 1] = '\0';
	return (result);
}
