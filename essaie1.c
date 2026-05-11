#include<stdio.h>

void afficheElemts(int tableau[], int taille);
int main()
{
	int tab[4] = {10,20,11,32};	
	afficheElemts(tab, 4);

	return 0;
}

void afficheElemts(int tableau[], int taille)
{
	for(int i=0; i<4; i++)
	{
		printf("Eléments du tableau : %d\n", tableau[i]);
	}
}
