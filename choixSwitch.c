#include<stdio.h>

int main()
{
	int choixMenu;

	printf("=== Menu ===");
	printf("1. Royal Cheese\n2. Mc Deluxe\n3. Mc Baron\n4. Big Mac \n");
	scanf("%d", &choixMenu);

	printf("Votre Choix ?\n");

	switch(choixMenu)
	{
		case 1:
			printf("J'ai choisi Royal Cheese \n");
		break;
		case 2:
			printf("J'ai choisi Mc Deluxe \n");
		break;

		case 3:
			printf("J'ai choisi Mc Bacon \n");
		break;
		case 4:
			printf("J'ai choisi Big Macon \n");
		break;

		defaul:
			printf("Aucun choix a été fait");
		break;
		return 0;
	}
}
