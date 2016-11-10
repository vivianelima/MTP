#include <stdio.h>
#define MAXPILHA 10 //tamanho maximo da pilha
typedef char DADO; //muda o tipo da pilha aqui

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
	int i;
	Pilha pilha;
	pilha.idtopo = -1; // pilha vazia
	// Programa
	printf("push: ");
	for(i = 0; i < 5; i++)
	{
		push(&pilha,  'A' + i); 
		printf("%c ", top(pilha));// testa push
		
	}
	
	printf("\n\nPop: ");
	while(!empty(pilha)) //testa EMPTY
	{
		printf("%c ", top(pilha)); //testa POP
		pop(&pilha); //testa POP
	}
	printf("\n\nEstouro?: ");
	for(i = 0; i < MAXPILHA +1; i++) // testa estouro
	{
	
		push(&pilha,  'A' + i); 
		printf("%c ", top(pilha));// testa TOP
		
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
