#include<stdio.h>
int main() 
{
	int age;
	printf("Entrez votre age compris entre 12 à 20 \n");
	scanf("%d", &age);
	
	switch(age)
	{
		case 12:
			printf("Adolescent \n");
		break;
		case 16:
			printf("Mineur \n");
		break;
		case 18:
			printf("Majeur \n");
		break;
		case 20:
			printf("Adulte \n");
		break;
		default:
			printf("Aucun age à l'attribué \n");
		break;
	}
	return 0;

}
