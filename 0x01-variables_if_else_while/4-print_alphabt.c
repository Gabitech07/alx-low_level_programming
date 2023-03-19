#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */

int main(void)
{
	int c;

	c = 97;

	while (c <= 122)
	{
		if (c == 113 || c == 101)
		{
			c++;
			continue;
		}
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
