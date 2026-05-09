#include<stdio.h>

int main()
{
	int age;
	printf("Tape ton âge : ");
	scanf("%d", &age);
	printf("L'adresse de la variable age est: %p\n", &age);

	return 0;
}
