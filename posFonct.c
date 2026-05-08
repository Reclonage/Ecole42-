#include<stdio.h>

void affichPos(int tab[], int taille)
{
	int pos[taille];
	int i;

	for(i=0; i<taille; i++)
	{
		pos[i] = tab[i];

		if(tab[i] > 0)
		{
			printf("%d", tab[i]);
		}
		printf("\n");
	}
}
int main()
{
	int monTan[5] = {-2,10,1,21,-12};

	 affichPos(monTan, 4);

	return 0;
}

