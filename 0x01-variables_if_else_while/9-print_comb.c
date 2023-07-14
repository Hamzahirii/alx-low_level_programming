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
	int i;

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
