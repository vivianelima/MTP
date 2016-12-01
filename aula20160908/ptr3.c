#include <stdio.h>
int main()
{
    int vet[] = {0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF};
    int contador = 0;

    unsigned char *p = NULL, *q;
    p = q = (unsigned char *) vet;
    for(; p < q + sizeof(vet); p++)
        {
            if(*p != 0x0)
                contador++;
            printf("%p : %X\n", p, *p);
        }
    printf("Bytes apenas com 1's: %d\n", contador);
    return 0;
}
