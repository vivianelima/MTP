#include <stdio.h>
int main()
{
    int vetor[] = {0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF};
    int cont = 0;

    unsigned char *p = NULL, *q;
    p = q = (unsigned char *) vetor;
    for(; p < q + sizeof(vetor); p++)
        {
            if(*p != 0x0)
                cont++;
            printf("%p : %X\n", p, *p);
        }
    printf("Bytes apenas com 1's: %d\n", cont);
    return 0;
}
