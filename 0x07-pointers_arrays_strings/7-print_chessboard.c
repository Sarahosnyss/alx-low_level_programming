#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard
 * @a: 2d array of chars
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int a, s;

	for (a = 0; a < 8; a++)
	{
		for (s = 0; s < 8; s++)
		{
			_putchar(a[a][s]);
		}

	_putchar('\n');
	}
}
