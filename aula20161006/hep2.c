#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void recebe_Matriz(float **matriz, int N, int M);
void imprime_Matriz(float **matriz, int N, int M);
void imprime_Transposta(float **matriz, int N, int M);
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
	recebe_Matriz(matriz,  N,  M);
	imprime_Matriz(matriz, N, M);
	printf("\n\n");
	imprime_Transposta(matriz, N, M);
	for(i =0; i < N; i++)
		free(matriz[i]);
	free(matriz);
	return 0;
	
}

void recebe_Matriz(float **matriz, int N, int M)

{
	int i, j;
	for(i = 0; i < N; i++)
		for(j= 0; j < M; j++)
			{
				printf("Entre com o elemento(%d, %d): ", i , j);
				scanf("%f", &matriz[i][j]);
				
			}
}
void imprime_Matriz(float **matriz, int N, int M)
{
	int i, j;
	for(i = 0; i < N; i++)
		for(j= 0; j < M; j++)
			printf("%g%c", matriz[i][j], (j== M-1)? '\n': '\t');
}

void imprime_Transposta(float **matriz, int N, int M)
{
	int i, j;
	for(j = 0; j < M; j++)
		for(i = 0; i < N; i++)
			printf("%g%c", matriz[i][j], (i == N-1)? '\n': '\t');
}

