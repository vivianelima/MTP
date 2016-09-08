#include <stdio.h>
int main()
{
    int vetor[] = {0,1,2,4,8};
    int cont = 0;
    //int tam = sizeof(vetor)/sizeof(int);

    unsigned char *p = NULL, *q;
    p = q = (unsigned char *) vetor;
    for(; p < q + sizeof(vetor); p++)
        {
            if(*p == 0x0)
                cont++;
            printf("%p : %X\n", p, *p);
        }
    printf("Bytes apenas com 0's: %d\n", cont);
    return 0;
}
