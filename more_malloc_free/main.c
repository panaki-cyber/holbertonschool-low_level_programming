#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
	char *p;

	p = malloc_checked(20);
	if (p != NULL)
		printf("Allocation de 20 bytes : OK\n");

	free(p);

	return 0;
}
