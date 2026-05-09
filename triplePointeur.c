#include<stdio.h>

void triplePointeur(int *pointeurSurNombre);

int main()
{
	int nombre;
	printf("Tape un nombre sur clasier : ");
	scanf("%d", &nombre);

	triplePointeur(&nombre);
	
	printf("%d", nombre);
	printf("\n");
	return 0;
}
void triplePointeur(int *pointeurSurNombre)
{
	*pointeurSurNombre *=3;
}
