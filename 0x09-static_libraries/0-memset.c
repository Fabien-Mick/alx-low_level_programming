#include "main.h"

/**
   * _memset - Function fills the first n bytes of the memory area
    *          pointed to by @s.
     * @s: Pointer to the memory area to be filled.
      * @b: Character to fill the memory area.
       * @n: The number of bytes to be filled.
        *
	 * Return: A pointer to the filled memory area @s.
	  */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
	*s = b;
	s++;
	}
	return (start);
}
