#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, vet[10], soma = 0, prod = 1;

    printf("Entre com 10 numeros: \n");
    for(i = 0; i < 10; i++)
        scanf("%d\n", &vet[i]);

    for( i = 0; i < 10; i ++)
        soma = soma + vet[i];

    for( i = 0; i < 10; i ++)
        prod = prod * vet[i];

    printf("\nA soma eh: %d\n", soma);
    printf("O produto eh: %d\n", prod);

    return 0;
}

