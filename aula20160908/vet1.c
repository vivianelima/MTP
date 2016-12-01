#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10000
int main()
{
    srand(time(0));
    unsigned int num;
    float soma = 0.0f, media, aleat [N];
    int i;
    printf("\nEntre com um numero inteiro nao negativo: ");
    scanf("%u", &num);

    for( i = 0; i < N; i ++)
        aleat[i] = rand()%num +1;
        
    for( i = 0; i < N; i ++)
        soma = soma + aleat[i];
        
    media = soma/N;
    printf("A media eh: %f\n", media);
    
    return 0;
}
