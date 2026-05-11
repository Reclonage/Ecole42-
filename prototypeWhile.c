#include<stdio.h>

void fonctionTri(int* compteur);

int main()
{
	int nombre;
	int* pointeur = &nombre;

	while(*pointeur != 42)
	{
		printf("Tape le nombre 42 :");
		scanf("%d", pointeur);

	}
	printf("Le nombre entier est accepté : %d\n", *pointeur);
	return 0;
}
void fonctionTri(int* compteur)
{
	 fonctionTri(compteur);
}
