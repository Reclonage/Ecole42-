#include<stdio.h>

int repeter(int compteur)
{
	printf("Affiche les elements du compteur : \n");
	for(int i=0; i<compteur; i++)
	{
		printf("Les elements %d sont : %d\n", i, compteur);
	}
	return compteur;
}
int main()
{
	repeter(10);
	return 0;
}
