#include <stdio.h>

/**
 * _strcpy - Copies the string pointed to by src, including the null byte,
 *           to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';  // Add the null terminator

	return dest;
}

int main(void)
{
	char src[] = "Hello, world!";
	char dest[50];

	_strcpy(dest, src);
	printf("Copied string: %s\n", dest);

	return 0;
}
