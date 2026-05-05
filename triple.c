#include<stdio.h>

int triple(int nombre)
{
	return 3 * nombre;
}
int main()
{
	int nombreTrip = 0;
	int nombreEntr = 0;

	printf("Tape un nombre sur le clavier : ");
	scanf("%d", &nombreEntr);

	nombreTrip = triple(nombreEntr);

	printf("Le triple est : %d\n", nombreTrip);
	return 0;
}
