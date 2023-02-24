#include "main.h"

/** 
 * print_line - draw a straight line in the terminal
 * @n : number of times the character _should be printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{ 
		int i, j;
		for (i = 0; 1 < n; i++)
		{
			for (j = 0; i < n; i++)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else if (j < i)
				{
					_putchar(' ');
				}
			}
			_putchar('\n);
		}
	}
}
