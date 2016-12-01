#include <stdio.h>

#define N 2
#define M 4

void imprime_Matriz(float matriz[N][M]);
void imprime_Transposta(float matriz[N][M]);

int main()
{
	float matriz [N][M];
	int i, j;
	for(i = 0; i < N; i++)
		for(j= 0; j < M; j++)
			{
				printf("Entre com o elemento(%d, %d): ", i , j);
				scanf("%f", &matriz[i][j]);
				
			}
	imprime_Matriz(matriz);	
	printf("\nA transposta e: \n");	
	imprime_Transposta(matriz);	
	return 0;
}

void imprime_Matriz(float matriz[N][M])
{
	int i, j;
	for(i = 0; i < N; i++)
		for(j= 0; j < M; j++)
			printf("%g%c", matriz[i][j], (j== M-1)? '\n': '\t');
}

void imprime_Transposta(float matriz[N][M])
{
	int i, j;
	for(j = 0; j < M; j++)
		for(i = 0; i < N; i++)
			printf("%g%c", matriz[i][j], (i == N-1)? '\n': '\t');
}

