#include<stdio.h>
int main() 
{
	int age;
	switch(age)
	{
		case 2:
		printf("bonjour bébé \n");
		break;
		case 16:
		printf("Bonjour Adolescent \n");
		break;
		case 18:
		printf("Bonjour Adulte \n");
		break;
		case 20:
		printf("Bonjour Majeur \n");
		break;
		default:
		printf("je n'ai pas d'âge pour de donné \n");
		return 0;
	}	
}
