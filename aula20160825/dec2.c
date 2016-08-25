#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

srand(time(0));

    int numero,resul ;
    printf("Escreva um numero inteiro positivo");
    scanf("%d", &numero);
    if (numero < 0)
        printf("Numero invalido");
    else
    {
        resul = numero + rand()%6+1;
        if(resul%2==0)
            printf("O resultado e par");
        else
            printf("o resultado e impar");
    }
    return 0;
}
