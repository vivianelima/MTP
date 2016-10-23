#include<stdio.h>

int main()
{
	int soma, i, num;
	soma = 0;
	printf("\nEntre com um numero: ");
	scanf("%d", &num);
	for(i = 1 ; i < num; i++)
	{
		if((num%i)==0)
		soma = soma + i;
	}
	if( soma == num)
	printf("EH PERFEITO!!!");
	else
	printf("O numero nao eh perfeito\n\n");
	return 0;
}
	
