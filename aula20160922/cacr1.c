#include <stdio.h>
int primo(int num);
int main()
{
	int num, i;
	printf("Entre com um numero: ");
	scanf("%d", &num);
	
	for(i = 1 ; i <= num/2; i++)
		if	(primo(i) && primo(num - i))	
				printf("%d + %d\n", i , num- i);
	return 0;
}

int primo(int num)
{
	int i, checador = 1;
	for( i = 2; i <= num/2; i ++)
		if(num%i == 0)
			{
				checador = 0;
				break;
			}
		return (num <= 1)? 0 : checador;
}
