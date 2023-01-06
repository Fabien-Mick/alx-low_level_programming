#include "main.h"

/**
   * _strcat - Concat two string @src and @dest, including the terminating
    * null byte.
     * @dest: A pointer to the string to be concatenated
      * @src: A pointer to the string to append to @dest
       *
        * Return: A pointer to the resulting string dest
	 */

char *_strcat(char *dest, char *src)
{
		int index = 0, dest_len = 0;

			while (dest[index++])
						dest_len++;

				for (index = 0; src[index]; index++)
							dest[dest_len++] = src[index];

					return (dest);
}
