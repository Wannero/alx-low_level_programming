#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: the array of integers
 * @n: the size of the array
 **/

void reverse_array(int *a, int n)
{
	int b;
	int c;
	int swaper;

	b = 0;
	c = n - 1;
	while (b < n / 2)
	{
		swaper = a[b];
		a[b] = a[c];
		a[c] = swaper;
		b++;
		c--;
	}
}
