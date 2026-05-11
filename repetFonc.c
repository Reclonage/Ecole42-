#include<stdio.h>

int repeter(int tableau[], int taille)
{
	int tab[4] = {-2,1,0,-4};
	int pos[4];
	for(int i=0; i<4; i++)
	{
		pos[i] = tab[i];
	}
	for(int i=0; i<4; i++)
	{
		if(tab[i] > 0)
		{
		     printf("Les elements positifs du tableau : %d\n",tab[i]);
		}
	}
	return i;
}
int main()
{
	printf("Affiche l'element positif du tableau: %d\n", repeter(tableau, 4));
	return 0;
}
