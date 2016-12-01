#include <stdio.h>

int divisao(int dividendo, int divisor, 
		int *quociente, int *rest);
		
int main() 
{
	int dividendo, divisor;
	int quociente, rest;
	
	printf("Entre com o dividendo: ");
	scanf("%d",&dividendo);
	printf("Entre com o divisor: ");
	scanf("%d",&divisor);
	
	if(divisao(dividendo, divisor, &quociente, &rest))
		printf("Quociente: %d; Resto: %d\n", quociente, rest);
	else
		printf(".:::ERRO:::.\n");
	return 0;
}

int divisao(int dividendo, int divisor, 
		int *quociente, int *rest)
		 {
			if(divisor != 0) 
				{
					*quociente = dividendo / divisor;
					*rest = dividendo % divisor;
					return 1;
				}
	 		else return 0;
		}

