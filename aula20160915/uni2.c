#include<stdio.h>

int main()
{
	int op;
	printf(" Qual o tipo voce deseja?\n\n");
	printf("1 - int, 2 - float\n");
	scanf("%d", &op);
	printf("\nEntre com o numero: ");
	union Tipo
	{
		int num1;
		float num2;
	};
	union Tipo dado;
	
	switch(op)
	{	
		case 1:
			scanf("%u", &(dado.num1));
			printf("\nO numero em float seria: %u", (dado.num2));
			break;
		case 2:
			scanf("%u", &(dado.num2));
				printf("\nO numero em int seria: %u", (dado.num1));
			break;
	}
	 printf("\n%u", (dado.num2));
	return 0;
}
