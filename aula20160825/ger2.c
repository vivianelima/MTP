#include<stdio.h>
#include <time.h>
int main()
{
	int num, i, aleat, cont = 0;
	srand(time(0));
	aleat = rand()%100;
		
	do
	{
		printf("Entre com um numero qualquer.\n");
		scanf("%d",&num);
		
		if (num < aleat)
		printf("BAIXO\n");
		
		if (num > aleat)
		printf("ALTO\n");
		
		cont ++;
	
	}while(num != aleat);
		
	printf("\n\nACERTOU!!!!\n");
	printf("Voce fez ao total %d tentativas", cont);
	return 0;
}
