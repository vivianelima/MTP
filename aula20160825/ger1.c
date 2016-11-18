#include<stdio.h>
int main()
{
	int num, i;
	printf("Entre com um numero.\n");
	scanf("%d",&num);
	
	for(i=2; i < num; i++)
	{
		if(num % i == 0)
		{
			printf("Nao e primo!\n");
			break;
		}
	}
	if(i == num)
	printf("Primo!!!!\n");
	return 0;
}
