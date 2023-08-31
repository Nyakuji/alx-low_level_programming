#include "main.h"

/**
* flip_bits - returns of bits you would need to flip .
* @n: input
* @m: input
*
* Return: The number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		/* I used bitwise AND with 1 to check the least significant bit */
		count += xor_result & 1;

		/* >> xor_result to check the next bit */
		xor_result >>= 1;
	}
	return (count);
}
