#include <stdio.h>
int main()
{
    int vet[] = {0,1,2,4,8};
    int contador = 0;
    //int tam = sizeof(vetor)/sizeof(int);

    unsigned char *p = NULL, *q;
    p = q = (unsigned char *) vet;
    for(; p < q + sizeof(vet); p++)
        {
            if(*p == 0x0)
                contador++;
            printf("%p : %X\n", p, *p);
        }
    printf("Bytes apenas com 0's: %d\n", contador);
    return 0;
}
