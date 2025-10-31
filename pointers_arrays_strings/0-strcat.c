#include "main.h"
#include <stdio.h>

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
	/* Move ptr to the end of dest string */
	while (*ptr != '\0')
	ptr++;

	/* Copy src to the end of dest */
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	/* Add the terminating null byte */
	*ptr = '\0';

	return (dest);
}

/**
 * main - Entry point of the program
 *
 * Description: Demonstrates the _strcat function by
 *              concatenating two strings and printing the result.
 *
 * Return: 0 on success
 */
int main(void)
{
	char str1[50] = "Hello, ";
	char str2[] = "world!";

	_strcat(str1, str2);
	printf("%s\n", str1);

	return (0);
}
