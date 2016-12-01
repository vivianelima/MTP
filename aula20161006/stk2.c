#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float media(float  vetor[], int qtde);
float desvio_padrao(float  vetor[], int qtde);
int main()
{
	int qtde= 5;
	int i;
	float vetor[5];
	for( i = 0; i < 5; i++)
	{
		printf("Entre com o elemento %d: ", i+1);
		scanf("%f", &vetor[i]);
	}
	
	printf("Media: %.3f; Devio-padrao: %.3f\n", media(vetor,qtde), desvio_padrao(vetor,qtde));
	
	return 0;
	
}

float media(float vetor[], int qtde)
{
	float soma = 0;
	int i;
	for( i = 0; i < qtde; i++)
		soma += vetor[i];
	return soma/qtde;
}

float desvio_padrao(float vetor[], int qtde)
{
	float soma = 0;
	float m = media(vetor,qtde);
	int i;
	for( i = 0; i < qtde; i++)
		soma += pow((vetor[i] - m), 2);
	return sqrt(soma/(qtde -1));
}
