#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int X, i;
	int *Pnum;
	printf("Alloue une espace memoire \n");
	scanf("%d", &X);
	
	Pnum =(int*) malloc(X*sizeof(int));

	//if(Pnum == NULL)
	//{
	//	printf("Erreur d'allocation \n");
	//	return 1;
	//}
	//for(i = 0; i < X; i++)
	//{
	//	Pnum[i] = i + 1;
	//}
	//printf("Remplir le tableau : \n");
	//for(i = 0; i < X; i++)
	//{
		printf("Les pnum : %d \n", *Pnum);
	//}
	return 0;

	
}

