#include<stdio.h>
#include<string.h>

int main(int argc,char *argv)
{
	char chaine[] = "salut";
	int longChaine = 0;

	longChaine = strlen(chaine);

	printf("La chaine %s est composé de %d caractères \n", chaine, longChaine);

	return 0;
}
