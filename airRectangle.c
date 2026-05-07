#include<stdio.h>

double airRectangle(double hauteur, double longueur)
{
	return hauteur * longueur;
}

double main()
{
	printf("L'air du rectangle est : %f\n",airRectangle(2.5,10.0));
	return 0;
}
