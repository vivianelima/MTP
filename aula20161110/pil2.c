#include <stdio.h>
#include <stdlib.h>
typedef int DADO; //muda o tipo da pilha aqui

typedef struct pilha_
{
	DADO topo;
	struct Pilha_ *proximo;
	
}Pilha;

void push(Pilha **ppilha, DADO elemento);
void pop (Pilha **ppilha);
DADO top(Pilha *pilha);
int empty(Pilha *pilha );

int main ()
{
	int i;
	Pilha *pilha = NULL; // pilha vazia
	// Programa
	printf("push: ");
	for(i = 0; i < 5; i++)
	{
		push(&pilha,  i); 
		printf("%d ", top(pilha));// testa push
		
	}
	
	printf("\n\nPop: ");
	while(!empty(pilha)) //testa EMPTY
	{
		printf("%d ", top(pilha)); //testa POP
		pop(&pilha); //testa POP
	}
	printf("\n\n");
	return 0;
}

void push(Pilha **ppilha, DADO elemento)
{
	 Pilha *novo = (Pilha*) malloc(sizeof(Pilha));
	 novo -> topo = elemento;
	 novo -> proximo = *ppilha;
	 *ppilha = novo;
}

void pop (Pilha **ppilha)
{
	Pilha * aux = NULL;
	if(!empty(*ppilha))
	{
		aux = (*ppilha)->proximo;
		free(*ppilha);
		*ppilha = aux;
	}
			 
	else 
	fprintf(stdout, "\n\nWARNING:::PILHA VAZIA!\n");
}

DADO top(Pilha *pilha) 
{
	return pilha -> topo;
}
	
int empty(Pilha *pilha )
{
	return (pilha == NULL);
}
