#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void recebe_Vetor( float * vetor, int qtde);
float media(float * vetor, int qtde);
float desvio_padrao(float * vetor, int qtde);
int main()
{
	int qtde;
	float * vetor;
	printf("Entre com a quantidade de elementos: ");
	scanf("%d", &qtde);
	vetor = (float *) calloc(qtde, sizeof(float));
	recebe_Vetor(vetor, qtde);
	printf("Media: %g; Devio-padrao: %g\n", media(vetor,qtde), desvio_padrao(vetor,qtde));
	free(vetor);
	return 0;
	
}

void recebe_Vetor( float * vetor, int qtde)
{
	int i;
	for( i = 0; i < qtde; i++)
	{
		printf("Entre com o elemento %d: ", i+1);
		scanf("%f", &vetor[i]);
	}
}

float media(float * vetor, int qtde)
{
	float soma = 0;
	int i;
	for( i = 0; i < qtde; i++)
		soma += vetor[i];
	return soma/qtde;
}

float desvio_padrao(float * vetor, int qtde)
{
	float soma = 0;
	float m = media(vetor,qtde);
	int i;
	for( i = 0; i < qtde; i++)
		soma += pow((vetor[i] - m), 2);
	return sqrt(soma/(qtde -1));
}
