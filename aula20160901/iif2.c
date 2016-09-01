#include<stdio.h>
int main()
{
    int numero;
    double  i , fatorial;
    printf("Entre com um numero: ");
    scanf("%d", &numero);
    fatorial = 1;
    for(i = 1; i <= numero; i++)
        fatorial = fatorial*i;
    printf("O fatorial de %d e igual %lf.\n", numero, fatorial);
    return 0;
}
