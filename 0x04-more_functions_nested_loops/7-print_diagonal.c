#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times the character
 * Return: Always (0)
 */

void print_diagonal(int n)
{
	int i;
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (a = 0; a < i; a++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
