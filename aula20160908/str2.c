#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i;
    char frase[256];
    printf("Entre com uma frase: ");
    gets(frase);
    printf("\n\n..::: PALAVRA ESCONDIDA:::..\n\n");
    printf("%c", frase[0]);
    for(i = 0; frase[i] != '\0'; i++)
    {
		if(frase[i]== ' ')
        printf("%c", frase[i+1]);
	}
    return 0;
}
