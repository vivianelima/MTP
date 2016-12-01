#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * iniciaTexto();
void recebe_Texto(char ** texto);

int main()
{
	char * texto = iniciaTexto();  //printf("Tamanho da string: %d\n", strlen(texto));
	printf("::: Inicio :::\n");
	recebe_Texto(&texto);
	
	printf("::: Voce escreveu: :::\n");
	printf("%s\n",texto);
	printf("\nTamanho da string: %d\n", strlen(texto));
	
	return 0;
}

char * iniciaTexto()
{
	char * texto = (char*) malloc(sizeof(char));
	texto[0]='\0';
	return texto;
}

void recebe_Texto(char ** texto)
{
	char *aux;
	int c, tamanho=0;
	do {
		c = getchar();
		if(c != '#')
		{
			aux = (char *) realloc(*texto, tamanho+2);
			if(aux != NULL)
				{
					*texto = aux;
					(*texto)[tamanho] = c;
					tamanho++;
					(*texto)[tamanho] = '\0';
				}
				else 
					printf("***ERRO!!! Sem memoria!***\n");
			
		}
		
	   } while(c != '#');
}
