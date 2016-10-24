#include<stdio.h>
#include<time.h>
int sorteia(int X);
int main()
{
	srand(time(0));
	int num;
	printf("Entre com um numero de 1 a 10: ");
	scanf("%d",&num);
	sorteia(num);
	return 0;
}

int sorteia(int X)
{
	int i;
	int aleat;
	for(i = 0; i < 10; i++)
	{
		aleat = rand()%10+1;
		if(X == aleat)
		printf("PARABENS, O SEU NUMERO FOI SORTEADO!!!\n\n");
	}
}
