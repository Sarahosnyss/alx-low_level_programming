#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: 2D array
 * @size: size x size of the square matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int w;
	int tl = 0;
	int tr = 0;
	int s = size * size;

	for (w = 0; w < s; w += size + 1)
	{
		tl += a[w];
	}

	for (w = size - 1; w < s - 1; w += size - 1)
	{
		tr += a[w];
	}

	printf("%d, %d\n", tl, tr);
}
