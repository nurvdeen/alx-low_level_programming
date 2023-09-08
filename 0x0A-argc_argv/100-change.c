#include <stdio.h>
#include <stdlib.h>

/**
 * main - function name
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Description: a program that prints the minimum
 * number of coins to make change
 * Return: -1 if error, otherwise 0.
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
		}
		cents--;
	}

	printf("%d\n", coins);

	return (0);
}
