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
	int a;
	int tl = 0;
	int tr = 0;
	int s = size * size;

	for (a = 0; a < s; a += size + 1)
	{
		tl += a[a];
	}

	for (a = size - 1; a < s - 1; a += size - 1)
	{
		tr += a[a];
	}

	printf("%d, %d\n", tl, tr);
}
