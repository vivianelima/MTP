#include <stdio.h>
#include <ctype.h>

int main()
{
    char frase[256];
    char olheiro;
    int indice = 0, cont = 0;
    printf("Degite uma frase:\n");
    gets(frase);
    olheiro = frase[indice];
    while(olheiro != '\0')
    {

        if(frase[indice] = isalpha(olheiro) )
            cont ++;
        indice ++;
        olheiro = frase[indice];
    }
    printf("A frase tem: %d letras", cont);


    return 0;

}

