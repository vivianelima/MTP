#include<stdio.h>
int main()
{
	int A,P, resul=1, i;
	printf("Escreva dois numeros inteiros:\n");
	scanf("%d", &A);
	scanf("%d", &P);
	for(i = 1; i <= P; i++)
		resul =  resul* A;
	printf("O resultado e: %d", resul);
	return 0;
}
