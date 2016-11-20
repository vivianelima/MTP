#include <stdio.h>
#include <ctype.h>

int main()
{
    char frase[256];
    char observador;
    int indice = 0, cont = 0;
    printf("Degite uma frase:\n");
    gets(frase);
    observador = frase[indice];
    while(observador != '\0')
    {

        if(frase[indice] = isalpha(observador) )
            cont ++;
        indice ++;
        observador = frase[indice];
    }
    printf("A frase tem: %d letras", cont);


    return 0;

}

