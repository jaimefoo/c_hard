#include <stdio.h>
#include <stdlib.h>

#define LETRAS "TRWAGMYFPDXBNJZSQVHLCKE"

char letra(int dni)
{
	int resto = dni % 23;
	return LETRAS[resto];
}

int main(int argc, char *argv[])
{
	
	int dni;	

	if (argc != 2)
	{
		printf("Usage: %s <DNI>\n", argv[0]);
		exit(1);
	}
	dni = atoi(argv[1]);
	printf("%c\n", letra(dni));
	exit(0);
}
