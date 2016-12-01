#include <stdio.h>
#include <stdlib.h>

typedef struct _Pilha
{
	float n;
	struct _Pilha *ext;
}Pilha;

void push(Pilha **ppilha, float elemento);
void pop (Pilha **ppilha);
float top (Pilha *pilha);
int empty(Pilha *pilha);

int main()
{
	Pilha *pilha=NULL;

	FILE * arquivo = fopen("dados.txt", "r");
	float m;

	while(!feof(arquivo))
	{
		fscanf(arquivo, "%f\n", &m);
		push(&pilha, m);
	}

	printf("Dados armazenados:\n ");
	while(!empty(pilha))
	{
		printf(" %g ", top(pilha));
		pop(&pilha);
	}

	free(pilha);
	return 0;
	}

void push(Pilha **ppilha, float elemento)
{
	Pilha *novo=malloc(sizeof(Pilha));
	novo->n=elemento;
	novo->ext=*ppilha;
	*ppilha=novo;

}

void pop (Pilha **ppilha)
{
	if(*ppilha != NULL)
		{
			Pilha * aux = (*ppilha)->ext;
			free(*ppilha);
			*ppilha = aux;
 		}
}

float top (Pilha *pilha)
{
	if(pilha!=NULL)
	return pilha->n;

	printf("PILHA VAZIA.\n");

}

int empty(Pilha *pilha)
{
	return pilha==NULL;
}
