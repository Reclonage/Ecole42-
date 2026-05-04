#include<stdio.h>

int main()
{
	int choixMenu;

	printf("=== Menu === \n");
	printf("1. Royal Cheese\n2. Mc Deluxe\n3.Mc Bacon\n4. Big Mac ");
	printf("Votre choix \n");
	scanf("%d", &choixMenu);

	if(choixMenu == 1)
	{
		printf("Royal Cheese \n");
	}
	if(choixMenu == 2)
	{
		printf("Mc Deluxe \n");
	}
	if(choixMenu == 3)
	{
		printf("Mc Bacon \n");
	}
	if(choixMenu == 4)
	{
		printf("Big Mac \n");
	}

	printf("\n");

	return 0;
}
