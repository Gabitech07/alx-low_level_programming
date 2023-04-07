#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
<<<<<<< HEAD

void print_rev(char *s)
{
	int i; 
	int j;
	int len;

	i = 0;

	while (i != '\0')
	{
		i++;
	}
=======
void print_rev(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

>>>>>>> a06be92d6a90025943ec112839574ab5c6477ec6
	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
<<<<<<< HEAD
=======

>>>>>>> a06be92d6a90025943ec112839574ab5c6477ec6
	_putchar('\n');
}
