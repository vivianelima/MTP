#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void recebeMatriz(float **matriz, int N, int M);
void imprimeMatriz(float **matriz, int N, int M);
void imprimeTransposta(float **matriz, int N, int M);
int main()
{
	int qtde;
	int N, M, i;
	float **matriz;
	printf("Entre com a ordem da matriz: ");
	scanf("%d %d", &N,&M);
	matriz = (float **) calloc(N, sizeof(float*));
	for(i = 0; i < N; i++)
	{
		matriz[i]= (float*)calloc(M, sizeof(float));
	
	}
	recebeMatriz(matriz,  N,  M);
	imprimeMatriz(matriz, N, M);
	printf("\n\n");
	imprimeTransposta(matriz, N, M);
	for(i =0; i < N; i++)
		free(matriz[i]);
	free(matriz);
	return 0;
	
}

void recebeMatriz(float **matriz, int N, int M)

{
	int i, j;
	for(i = 0; i < N; i++)
		for(j= 0; j < M; j++)
			{
				printf("Entre com o elemento(%d, %d): ", i , j);
				scanf("%f", &matriz[i][j]);
				
			}
}
void imprimeMatriz(float **matriz, int N, int M)
{
	int i, j;
	for(i = 0; i < N; i++)
		for(j= 0; j < M; j++)
			printf("%g%c", matriz[i][j], (j== M-1)? '\n': '\t');
}

void imprimeTransposta(float **matriz, int N, int M)
{
	int i, j;
	for(j = 0; j < M; j++)
		for(i = 0; i < N; i++)
			printf("%g%c", matriz[i][j], (i == N-1)? '\n': '\t');
}

