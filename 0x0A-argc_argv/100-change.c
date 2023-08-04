#include <stdio.h>
#include <stdlib.h>

/**
*main - prints the minimum number of coins to make change
* for an amount of money
*@argc: number of arguments
*@argv: array of arguments
*Return: returns 1 if there is an error; else returns 0
*/

int main(int argc, char *argv[])
{
int a, k = 0;

if (argc != 2)
{
	printf("Error\n");
	return (1);
}
a = atoi(argv[1]);
while (a > 0)
{
	k++;
	if ((a - 25) >= 0)
	{
		a -= 25;
		continue;
	}
	if ((a - 10) >= 0)
	{
		a -= 10;
		continue;
	}
	if ((a - 5) >= 0)
	{
		a -= 5;
		continue;
	}
	if ((a - 2) >= 0)
	{
		a -= 2;
		continue;
	}
	a--;
}
printf("%d\n", k);
return (0);
}
