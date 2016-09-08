#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j = 10, vet[10], vet2[10];

    printf("Entre com 10 numeros: \n");
    for(i = 0; i < 10; i++)
        scanf("%d\n", &vet[i]);

    for(i = 0; i < 10; i++)
        {
            vet2[j] = vet[i];
            j--;
        }

    printf("O novo vetor eh:");
    for(i = 0; i < 10; i++)
        printf("\n%d\n", vet2[i]);

    return 0;
}
