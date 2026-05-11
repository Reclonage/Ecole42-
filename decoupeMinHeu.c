#include<stdio.h>

void decoupeMin(int *pointHeure, int* pointMinute);

int main()
{
	int heure = 0;
	int minute = 30;

	decoupeMin(&heure, &minute);
	printf("%d heures et %d minutes ", heure, minute);
	printf("\n");

	return 0;
}

void decoupeMin(int* pointHeure, int* pointMinute)
{

	*pointHeure = *pointHeure / 60;
	*pointMinute = *pointMinute % 60;
}
