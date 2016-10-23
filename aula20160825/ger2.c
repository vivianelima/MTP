#include<stdio.h>
#include <time.h>
int main()
{
	int numero, i, aleatorio, cont = 0;
	srand(time(0));
	aleatorio = rand()%100;
		
	do
	{
		printf("Entre com um numero qualquer.\n");
		scanf("%d",&numero);
		
		if (numero < aleatorio)
		printf("BAIXO\n");
		
		if (numero > aleatorio)
		printf("ALTO\n");
		
		cont ++;
	
	}while(numero != aleatorio);
		
	printf("\n\nACERTOU!!!!\n");
	printf("Voce fez ao total %d tentativas", cont);
	return 0;
}
