#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index.
* @n: pointer to unsigned long integer.
* @index: index of input.
*
* Return: 1 if it worked, or -1 if an error occured.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* ctreate a mask with '0' bit at the desired index */
	mask = ~(1UL << index);

	/* bitwise AND with mask to clear the bit at the index */
	*n &= mask;

	return (1);
}
