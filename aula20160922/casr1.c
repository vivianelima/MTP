#include<stdio.h>
#include<time.h>
int sorteia(int X);
int main()
{
	srand(time(0));
	int numero;
	printf("Entre com um numero de 1 a 10: ");
	scanf("%d",&numero);
	sorteia(numero);
	return 0;
}

int sorteia(int X)
{
	int i;
	int aleatorio;
	for(i = 0; i < 10; i++)
	{
		aleatorio = rand()%10+1;
		if(X == aleatorio)
		printf("PARABENS, O SEU NUMERO FOI SORTEADO!!!\n\n");
	}
}
