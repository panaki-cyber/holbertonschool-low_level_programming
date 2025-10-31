#include "main.h"

/**
 * _strncat - Concatenates at most n bytes from src to the end of dest
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of bytes to copy from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	/* Move ptr to the end of dest string */
	while (*ptr != '\0')
		ptr++;

	/* Append at most n characters from src */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*ptr = src[i];
		ptr++;
	}

	/* Null-terminate the resulting string */
	*ptr = '\0';

	return (dest);
}
