#include<stdio.h>
int main()
{
	double numero,base, resul;
	printf("Escreva um numero:\n");
	scanf("%lf", &numero);
	printf("Escreva a base:\n");
	scanf("%lf", &base);

	resul=  log10(numero) /  log10(base);

	printf("O resultado e: %lf", resul);
	return 0;
}
