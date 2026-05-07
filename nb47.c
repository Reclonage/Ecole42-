#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int maFonction(int nombre)
{
	while(nombre != 47)
	{
		printf("Entre le nombre 47 : ");
		scanf("%d", &nombre);
	}
	return nombre;
}

int main()
{
	int nb;
	int compt;
	printf("Tape le nombre 47 sur le clavier : ");
	scanf("%d", &nb);

	compt = maFonction(nb);

	printf("Le nombre est accepté :%d\n", compt);
	return 0;
}
