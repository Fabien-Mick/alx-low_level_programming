#include "main.h"

/**
   * _memcpy - Function copys memory area
   * @src: Source to be copied.
   * @dest: Destination of the copied
   * @n: The number of bytes to copy from @src.
   *
   * Return: A pointer to the destination buffer @dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
return (dest);
}
