#include <stdio.h>

int main() {
	int a;
	int b;
	int som;
	
	printf("Entre le premier nombre ");
	scanf("%d", &a);
	printf("Entre le deuxieme nombre ");
	scanf("%d", &b);
	som=a+b;
	printf("La somme de %d et %d donne : %d\n ", a, b, som);
	return 0;
}
