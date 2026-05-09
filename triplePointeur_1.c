#include<stdio.h>

void triplePointeur(int *pointeurSurNombre);

int main()
{
	int nombre = 5;
	int *pointeur = &nombre;

	triplePointeur(pointeur);
	printf("%d", *pointeur);
	printf("\n");

	return 0;
}

void triplePointeur(int *pointeurSurNombre)
{
	*pointeurSurNombre *=3;
}
