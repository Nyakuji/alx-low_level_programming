#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at agiven index
* @n: pointer to unsigned long integer
* @index: index of input
*
* Return: 1 if it worked, or -1 if an error occurred.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;

	/* bitwise OR with the mask to set the bit at the index 1 */
	*n |= mask;

	return (1);
}
