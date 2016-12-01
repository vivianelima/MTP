#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, vetor[10], soma = 0, prod = 1;

    printf("Entre com 10 numeros:\n");
   	for(i=0;i<10;i++)
   		scanf("%d\n",&vetor[i]);

    for(i = 0; i < 10; i ++)
        soma = soma + vetor[i];

    for(i = 0; i < 10; i ++)
        prod = prod * vetor[i];

    printf("\nA soma eh: %d\n", soma);
    printf("\nO produto eh: %d\n", prod);
    
    for(i = 0; i < 10; i++)
        printf("%d\n",vetor[i]);


    return 0;
}

