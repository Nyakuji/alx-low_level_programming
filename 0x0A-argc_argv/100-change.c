#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the minimum number of coins to make change.
* @argc: number of command line arguments
* @argv: array that contains the program command line arguments
* Return: (0) -success
*/
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};

	int cents, num_coins, coins_count, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	num_coins = sizeof(coins) / sizeof(coins[0]);
	coins_count = 0;

	for (i =  0; i < num_coins; i++)
	{
		coins_count += cents / coins[i];
		cents %= coins[i];
	}
	printf("%d\n", coins_count);

	return (0);
}
