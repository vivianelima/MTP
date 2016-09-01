#include <stdio.h>
#include <ctype.h>

int main()
{
    char frase[256];
    char olheiro;
    int indice = 0;
    printf("Degite uma frase:\n");
    gets(frase);
    olheiro = frase[indice];
    while(olheiro != '\0')
    {
        frase[indice]= tolower(olheiro);
        indice++;
        olheiro = frase[indice];
    }
    printf("a nova frase eh:\n");
    printf("%s\n", frase);

    return 0;

}
