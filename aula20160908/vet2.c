#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j = 10, vetor[10], vetor2[10];

    printf("\nEntre com 10 numeros:\n");
    
    for(i = 0; i < 10; i++)
        scanf("%d",&vetor[i]);

    for(i=0; i < 10; i++)
        {
            vetor2[j] = vetor[i];
            j--;
        }

    printf("\nO novo vetor eh: "); 
    
    for(i = 1; i <= 10; i++)
        printf("\n%d", vetor2[i]);
    
    


    return 0;
}
