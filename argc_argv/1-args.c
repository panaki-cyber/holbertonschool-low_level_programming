#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 * @argc: argument count
 * @argv: argument vector (not used)
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;  /* On n'utilise pas argv */

	printf("%d\n", argc - 1); /* argc inclut le nom du programme */

	return (0);
}
