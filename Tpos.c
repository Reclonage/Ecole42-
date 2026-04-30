#include<stdio.h>

int main() {
	int tab[5] = {-3,0,2,-1,10};
	int pos[5];
	int i,j;

	for (j = 0, i = 0; i < 5; i++){
		if(tab[i]>0) {
			pos[j]=tab[i];
			j++;
		}
	
	}
	printf("Indice Tab : %d \n", i);
	printf("Element Pos : %d \n", pos[j]);
	return 0;

}
