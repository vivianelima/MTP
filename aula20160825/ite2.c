#include<stdio.h>
int main()
{
	int Base,P, resul=1, i;
	printf("Escreva dois numeros inteiros:\n");
	scanf("%d", &Base);
	scanf("%d", &P);
	for(i = 1; i <= P; i++)
		resul =  resul* Base;
	printf("O resultado e: %d", resul);
	return 0;
}
