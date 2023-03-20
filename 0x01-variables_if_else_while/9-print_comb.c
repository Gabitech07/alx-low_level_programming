#include <stdio.h>

/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
