#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i;
    char frase[256];
    printf("Entre com uma frase: ");
    gets(frase);
    for(i = 0; frase[i] != '\0'; i++)
        frase[i] = toupper(frase[i]);
    printf("\nA frase tem %d caracteres.\n", strlen(frase));
    if(strcmp(frase,"BOM DIA") == 0)
        printf("\nBom dia para voce tambem!!!");
    else
        printf("\nVoce quer dizer: %s?\n\n", frase);
    return 0;
}
