#include <stdio.h>
#include "main.h"

/**
 * _strcat - Concatenates the src string to the dest string
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	// Move ptr to the end of dest string
	while (*ptr != '\0')
		ptr++;

	// Copy src to the end of dest
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0'; // Add the terminating null byte

	return dest;
}

int main(void)
{
	char str1[50] = "Hello, ";
	char str2[] = "world!";

	_strcat(str1, str2);
	printf("Concatenated string: %s\n", str1);

	return 0;
}
