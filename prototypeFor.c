#include<stdio.h>

void fonctionAffiche(int* compteur);

int main()
{
	int nombre = 10;
	int* pointeur = &nombre;

	for(int i=*pointeur; i >= 0; i--)
	{
		printf("Affiche inverse des elements : %d", i);

		printf("\n");
	}
	return 0;
}
void fonctionAffiche(int* compteur)
{
	fonctionAffiche(compteur);
}
