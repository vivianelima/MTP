#include<stdio.h>
int main()
{
	double n,base, resul;
	printf("Escreva um numero:\n");
	scanf("%lf", &n);
	printf("Escreva a base:\n");
	scanf("%lf", &base);

	resul=  log10(n) /  log10(base);

	printf("O resultado e: %lf", resul);
	return 0;
}
