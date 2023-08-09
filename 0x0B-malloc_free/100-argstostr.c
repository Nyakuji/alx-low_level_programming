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

	int total_length, current_pos, i, j;

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
		for (j = 0; av[i][j] != '\0'; j++)
		{
			_putchar(av[i][j]);
			result[current_pos++] = av[i][j];
		}
		_putchar('\n');
		result[current_pos++] = '\n';
	}
	result[current_pos] = '\0';
	return (result);
}
