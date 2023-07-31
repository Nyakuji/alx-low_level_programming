#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: initial segment.
* @accept: accepted bytes
* Return: the number of accepted bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	/*Loop through the string until we find a character not present in accept*/
	while (*s != '\0')
	{
		char *acccept-ptr = accept;
		/*Check if the current character is present in the accept string */
		while (*accept-ptr != '\0')
		{
			if (*s == *accept_ptr)
			{
				count++;
				break;
			}
			accept-ptr++;
		}
		/*If the character is not found in accept, break the outer loop */
		if (*accept-ptr == '\0')
		{
			break;
		}
		s++; /*Move to the next character in the string */
	}
	return (count);
}
