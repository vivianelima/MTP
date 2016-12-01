#include <stdio.h>
#include <ctype.h>
#include <string.h>

void so_letras(char *frase, int tamanho, char *nova_frase);

int main() {
	char frase[256], nova_frase[256];
	printf("Entre com uma frase: ");
	gets(frase);
	so_letras(frase, strlen(frase), nova_frase);
	printf("%s\n", nova_frase);
	return 0;
}

void so_letras(char *frase, int tamanho, char *nova_frase) {
	int i, j = 0;
	for(i = 0; i < tamanho; i++)
		if(isalpha(frase[i])) {
			nova_frase[j] = frase[i];
			j++;
		}
	nova_frase[j] = '\0';
}
