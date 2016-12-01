#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned int num = 0XFACA8421;
    unsigned char *p = NULL; // inicializar ponteiros ( aponta para camada de abstração

    printf("%p : %u\n", &num, num);
    p = (unsigned char *) &num;
    for(; p < (unsigned char *) &num + sizeof(int) ; p++)
        printf("%p : %X\n", p, *p);

    

    return 0;
}
