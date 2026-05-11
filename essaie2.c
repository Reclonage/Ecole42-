#include<stdio.h>

int main(){
	int tab[4];

	//Initialisation d'un tableau
	for( int i=0; i<4; i++)
	{
		tab[i] = 0;
	}
	//affichage des elements initialiser
	for(int i=0; i<4; i++)
	{
		printf("Nouvel élément du tableau : %d\n", tab[i]);
	}

	return 0;
}
