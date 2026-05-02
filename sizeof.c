#include<stdio.h>

int main() 
{
	printf("Tailles des types de données sur cette machine :\n");
	printf("int : %zu octet \n", sizeof(int));
	printf("char : %zu octet \n", sizeof(char));
	printf("short : %zu octet \n", sizeof(short));
	printf("float : %zu octet \n", sizeof(float));
	printf("long long : %zu octet \n", sizeof(long long));
	printf("double : %zu octet \n", sizeof(double));

	return 0;
}
