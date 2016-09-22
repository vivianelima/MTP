#include <stdio.h>
#include<math.h> // rand
#include <ctype.h>
#include <string.h>
#include<stdlib.h>
void recebe_dado(char tipo, void*endereco);
int main()
{
	int i;
	float f;
	char c;
	printf("Entre com um inteiro:"); 
	recebe_dado('i', &i);
	printf("Entre com um float:"); 
	recebe_dado('f', &f);
	printf("Entre com um caracter:"); 
	recebe_dado('c', &c);
	
	printf("Para %d, o quadrado: %d\n", i, i*i);
	printf("Para %f, a raiz: %f\n", f, sqrt(f));
	printf("Para %c, o caracter: %c\n", c, (islower(c)) ? toupper(c): tolower(c));
	return 0;
	
}

void recebe_dado(char tipo, void*endereco)
{
	char c;
	switch(tipo)
	{
		case'i': scanf("%d", (int*) endereco);
		break;
		case'f': scanf("%f", (float*) endereco);
		break;
		case'c': scanf("%c", (char*) endereco);
		break;
	}
	while((c = getchar()) != EOF && c != '\n'); // apaga o buffer do teclado;
}

void recebeSTR(char * endereco, int n)
{
	fgets(endereco, n, stdin);
	if(endereco[strlen(edereco)-1] == 10)
		endereco[strlen(endereco)-1] = '\0';
}

