#include<stdio.h>

int main()
{
	int opcao;
	printf(" Qual o tipo voce deseja?\n\n");
	printf("1 - int, 2 - float\n");
	scanf("%d", &opcao);
	printf("\nEntre com o numero: ");
	union Tipo
	{
		int num1;
		float num2;
	};
	union Tipo dado;
	
	switch(opcao)
	{	
		case 1:
			scanf("%u",&(dado.num1));
			dado.num2 = dado.num1;
			printf("\nO numero em float seria: %u", (dado.num2));
			break;
		case 2:
			scanf("%u",&(dado.num2));
			dado.num1 = dado.num2;
			printf("\nO numero em int seria: %u", (dado.num1));
			break;
	}
	 printf("\n%u", (dado.num2));
	 printf("\n%u", (dado.num1));
	return 0;
}
