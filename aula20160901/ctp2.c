#include <stdio.h>
#include <ctype.h>

int main()
{
    char frase[256];
    char cont;
    int indice = 0;
    printf("Degite uma frase:\n");
    gets(frase);
    cont = frase[indice];
    while(cont != '\0')
    {
        frase[indice]= toupper(cont);
        indice++;
        cont = frase[indice];
    }
    printf("a nova frase eh:\n");
    printf("%s\n", frase);

    return 0;

}

