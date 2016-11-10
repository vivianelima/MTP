#include <stdio.h>
#define MAXPILHA 100 
#include <stdlib.h> //tamanho maximo da pilha
typedef int DADO; //muda o tipo da pilha aqui

typedef struct pilha_
{
	int idtopo;
	DADO dados[MAXPILHA];
	
}Pilha;

void push(Pilha * ppilha, DADO elemento);
void pop (Pilha * ppilha);
DADO top(Pilha pilha); // se a funçaão que modificar deve passar por referencia, senão pode passar por valor
int empty(Pilha pilha );

int main ()
{
	int i, escolha, num;
	FILE * arquivo;
	Pilha pilha;
	pilha.idtopo = -1; // pilha vazia
	// Programa
	printf("Entre com um numero inteiro:\n");
	
	do
	{
	scanf("%d", &num);
	if( num >= 0)
	{
		push(&pilha, num); 
	}
	
	} while( num >= 0);
	
	printf("Deseja visualizar a sequencia ou gravar? 1- visualizar, 2- gravar: ");
	scanf("%d", &escolha);
	if( escolha == 1)
	{

	while(!empty(pilha)) //testa EMPTY
	{
		printf("%d ", top(pilha)); //testa POP
		pop(&pilha); //testa POP
	}
	
	}	
	else
	{
		
	
	arquivo = fopen("exercicio.txt", "w");
	if(arquivo == NULL)
		fprintf(stderr,"Erro na gravacao!\n");
	else
	{
		while(!empty(pilha))
		{
	
		fprintf(arquivo,"%d ",top(pilha));
		pop(&pilha);
		}
		fclose(arquivo);
		
	}
	
}
	
		
	return 0;
}

void push(Pilha * ppilha, DADO elemento)
{
	 if (ppilha -> idtopo + 1 < MAXPILHA)
	 {
	 ppilha -> idtopo++;
	 ppilha -> dados[ppilha ->idtopo] = elemento;
	 }
	else 
	fprintf(stderr, "\n\nERRO::: ESTOURO DE PILHA!\n");
}

void pop (Pilha * ppilha)
{
	if(ppilha -> idtopo >= 0)
	{
		ppilha -> dados[ppilha ->idtopo] = 0x0; //"limpa" o elememto
		ppilha -> idtopo--;
	}
		 
	else 
	fprintf(stdout, "\n	WARNING:::PILHA VAZIA!\n");
}

DADO top(Pilha pilha) // se a funçaão que modificar deve passar por referencia, senão pode passar por valor
{
	return pilha.dados[pilha.idtopo];
}
	
int empty(Pilha pilha )
{
	return (pilha.idtopo) == -1;
}
