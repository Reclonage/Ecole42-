#include<stdio.h>
#include<string.h>

int longueChaine(const char* chaine);

int main(int argc, char* argv[])
{
	int nombreCaracter = 0;
	char chaine[] = "Bonjour";

	nombreCaracter = longueChaine(chaine);

	printf("La chaine %s est composé %d\n", chaine, nombreCaracter);

	return 0;
}

int longueChaine(const char* chaine)
{
	int longChaine = 0;
        char chaineActuel = 0;
	do
	{
		chaineActuel = chaine[longChaine];

		longChaine++;
	}

	while(chaineActuel != '\0');

	longChaine--;
	return longChaine;
}

