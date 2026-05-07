#include<stdio.h>

int add(int nb1, int nb2)
{
	return nb1 + nb2;
}
int main()
{
	int a;
	int b;
	int addition = 0;

	printf("Entre les deux nombres :\n");
	scanf("%d%d", &a, &b);
	
	addition = add( a, b);

	printf("La somme de %d et %d vaut : %d", a, b, addition);
	printf("\n");
	return 0;
}

