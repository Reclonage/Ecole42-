#include<stdio.h>

void nombrePosi(int nombre[], int taille);

int main()
{
	int nombre[4] = {-2,3,0,1};
	
	nombrePosi(nombre, 5);

	return 0;
}

void nombrePosi(int nombre[], int taille)
{
	for(int i=0; i<taille; i++)
	{
		if(nombre[i] > 0)
		{
			printf("Les éléments positifs du tableau : %d\n", nombre[i]);
		}
	}
}
