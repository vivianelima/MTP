#include<stdio.h>
#include<stdlib.h>

int TAMANHO = 0;
float *recebeNumero(float *vetor);
float media(float *vetor, int tamanho);
float maior(float *vetor, int tamanho);
float menor(float *vetor, int tamanho);

int main()
{
	int opc;
	float *vetor = NULL;
	do
	{
		printf("Entre com um numero.\n\n");
		vetor = recebeNumero(vetor);
		printf("A media: %f\n", media(vetor, TAMANHO));
		printf("O maior: %f\n", maior(vetor, TAMANHO));
		printf("O menor: %f\n", menor(vetor, TAMANHO));
		printf("Deseja digita outro numero? (0- nao, 1- sim): ");
		scanf("%d", &opc);
	
	}while(opc != 0);
	free(vetor);
	return 0;
}

float *recebeNumero(float *vetor)
{
	TAMANHO++;
	if(vetor == NULL)
		
		vetor= (float*)malloc(sizeof(float));
	else
		vetor= (float*) realloc(vetor, TAMANHO*sizeof(float));
	scanf("%f", &vetor[TAMANHO-1]);
	return vetor;
}

float media(float *vetor, int tamanho)
{
	int i;
	float soma =0.f, media;
		for(i =0; i < tamanho; i++)
	{
		soma = soma + vetor[i];
		
	}
	media = soma/tamanho;
	return media;
}

float maior(float *vetor, int tamanho)
{
	int i;
	float maior;
	maior= vetor[0];
	for( i = 0; i < tamanho; i++)
		if( vetor[i] > maior)
			maior = vetor[i];
	return maior;
}

float menor(float *vetor, int tamanho)
{
	int i;
	float menor;
	menor= vetor[0];
	for( i = 0; i < tamanho; i++)
		if( vetor[i] < menor)
			menor = vetor[i];
	return menor;
}



