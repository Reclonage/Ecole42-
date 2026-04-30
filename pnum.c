#include<stdio.h>

int main() {
	int A=10;
	int B=50;
	int *p;

	 p = &A;
	 B = *p;
	 *p = 20;

	 printf("B : %d \n", B);
	 printf("*p : %d \n", *p);
	 return 0;

}
