#include<stdio.h>
#include<stdlib.h>

void decoupHeure(int heure, int minute);

int main()
{

	int heure = 0;
	int minute = 90;

	decoupHeure(heure, minute);

	printf("%d heure et %d minute \n", heure, minute);

	return 0;
}
void decoupHeure(int heure, int minute)
{

	minute = minute/60;
	heure = heure/60;
}
