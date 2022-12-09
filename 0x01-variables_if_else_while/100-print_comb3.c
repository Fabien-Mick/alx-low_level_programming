#include<stdio.h>

/**
 * main - Entry point
 *
 * Return:Always 0 (Success)
 */

int main(void)
{
	int i = '0';
	int j = '0';

	while (i <= '8')
	{
		j = '1';
		while (j <= '9')
		{
			if (i < j)
			{
			putchar(i);
			putchar(j);
			if (i != '8' || j != '9')
			{
				putchar(',');
				putchar(' ');
			}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
