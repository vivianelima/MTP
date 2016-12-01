#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * iniciaTexto();
char * recebeTexto();
char * leTexto();
void gravaTexto(char * texto, int tam);
int main() {
    char * texto;
    printf("::: Inicio (para sair, tecle #,ENTER) :::::::::::\n");
    texto = leTexto();
    printf("%s", texto);
    texto = recebeTexto();
    printf("\n::: Na memoria :::::::::::\n");
    printf("%s\n", texto);
    printf("\nTamanho da string: %d\n", strlen(texto));
    gravaTexto(texto, strlen(texto));
    free(texto);
    return 0;
}
char * iniciaTexto() {
    char * texto = (char*) malloc(sizeof(char));
    texto[0] = '\0';
    return texto;
}
char * recebeTexto() {
    char * texto = iniciaTexto();
    char * aux;
    int c, tam = 0;
    do {
        c = getchar();
        if(c != '#') {
            aux = (char *) realloc(texto, tam+2);
            if(aux != NULL) {
                texto = aux;
                texto[tam] = c;
                tam++;
                texto[tam] = '\0';
            }
            else printf("\n** Erro! Sem memoria! **\n");
        }
    } while(c != '#');
    return texto;
}

void gravaTexto(char * texto, int tam)
{
	int i;
	FILE * arquivo;
	arquivo = fopen("meutexto.txt", "a");
	if(arquivo == NULL)
		fprintf(stderr,"Erro na gravacao!\n");
	else
	{
		for(i=0; i < tam; i++)
		fputc(texto[i],arquivo);
		fclose(arquivo);
	}
	
}

char * leTexto()
{
	FILE * arquivo;
	char * texto = iniciaTexto();
    char * aux;
    int c, tam = 0;
    arquivo = fopen("meutexto.txt" , "r");
    do {
        c = fgetc(arquivo);
        if(c != EOF) {
            aux = (char *) realloc(texto, tam+2);
            if(aux != NULL) {
                texto = aux;
                texto[tam] = c;
                tam++;
                texto[tam] = '\0';
            }
            else printf("\n** Erro! Sem memoria! **\n");
        }
    } while(c != EOF);
    fclose(arquivo);
    return texto;
}
