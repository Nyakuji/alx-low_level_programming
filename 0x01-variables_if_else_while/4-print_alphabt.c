#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alpha[26] = "abcdfghijklmnoprstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		putchar(alpha[i]);
		if (i == 101 && i == 113)
		{
			continue;
		}
	}
	putchar('\n');
	return (0);
}

