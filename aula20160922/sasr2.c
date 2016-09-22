#include <stdio.h>
void impar();
void par();
int main()
{
	int escolha;
	printf("Quais numeros voce deseja ver? Digite 1 ver para impares e 2 para pares\n");
	scanf("%d", &escolha);
	switch(escolha)
	{
		case 1: impar();
		break;
		case 2: par();
		break;
	}
	return 0;
}

void impar()
{
	int i;
	printf("Numeros impares:\n" );
	for( i = 1; i < 10; i=i+2)  // i+=2
		printf("%d, ", i );
}

void par()
{
	int i;
		printf("Numeros pares:\n");
	for( i = 0; i <= 10; i= i+2)
		printf(" %d,", i);
}
