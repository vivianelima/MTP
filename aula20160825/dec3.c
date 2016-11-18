#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int i, soma=0, dado;
	srand(time(0));
	
	for(i= 0; i < 3; i++)
	{
		dado = rand()%6+1;
   		 printf("%d\n", dado);

		 soma = soma + dado;
	}
	printf("Soma = %d", soma);
	
	if(soma == 7 ||soma == 11)
		printf("\nVoce ganhou!!!");
	else
		printf("\nVoce perdeu!!!");

return 0;
}
