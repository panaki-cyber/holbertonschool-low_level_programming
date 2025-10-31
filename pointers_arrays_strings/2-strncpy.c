#include "main.h"

/**
 * _strncpy - Copies at most n characters from src to dest
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 * @n: Maximum number of characters to copy
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy characters from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* If src has fewer than n chars, pad dest with '\0' */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
