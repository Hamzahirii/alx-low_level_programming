#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints with printf function.
 *
 * Return: Always 0
*/

int main(void)
{
	int n;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}