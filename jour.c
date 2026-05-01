#include<stdio.h>

int main () 
{
	char *JOUR[] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredri", "Samedi", "Dimanche"};
	char *tab[7];
	int i, j;
	for(j=0, i=0; i<7; i++)
		{
		// copier simplement les jours
			tab[j] = JOUR[i];
			j++;
		}

		printf("La semaine : \n");

		for (i=0; i<j; i++)
		{
			printf("%s\n", tab[i]);
		}
		
		return 0;
}
