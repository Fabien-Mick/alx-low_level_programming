#include <stdio.h>

/**
  * main - entry point
  *
  * Return: Always(0)
  */

int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e' || a == 'q')
			continue;
		putchar(a);
	}
	putchar('\n');
return (0);
}
