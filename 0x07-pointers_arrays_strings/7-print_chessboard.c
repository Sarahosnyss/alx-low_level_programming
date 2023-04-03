#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard
 * @a: 2d array of chars
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int w, s;

	for (w = 0; w < 8; w++)
	{
		for (s = 0; s < 8; s++)
		{
			_putchar(a[w][s]);
		}

	_putchar('\n');
	}
}
