#include "main.h"
/**
 * print_chessboard - A function that prints the chessboard
 * @a: 2 dimentional array
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			_putchar (a[i][j]);
			if (a[j] == a[7])
			{
				_putchar('\n');
			}
		}
		_putchar('\0');
	}
}
