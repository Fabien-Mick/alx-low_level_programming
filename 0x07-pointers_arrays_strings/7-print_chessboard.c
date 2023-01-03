#include "main.h"
/**
 * print_chessboard - Function prints a chessboard.
 * @a: Chessboard to be printed
 * Returns: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i][7]; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}

}
