#include <stdio.h>
int main()
{
    int num;
    printf("Entre com um numero:");
    scanf("%d",&num);
    if(num%2 == 0)
        printf("O numero eh par. \n");
    else
        printf("O numero eh impar\n");
    if(num%3 == 0)
        printf("O numero eh multiplo de 3.\n");
    if(num%5 == 0)
        printf("O numero eh multiplo de 5.\n");
    if(num%7 ==0)
        printf("O numero eh multiplo de 7.\n");

    return 0;
}
