#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int Delta(int a, int b, int c);

int main()
{
    int a, b, c, r1, r2, delta;
    printf("\n Informe os valores de a, b, c da funcao quadratica \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    delta = Delta(a,b,c);
    if (delta == 0)
    {
       r1 = (-b)/(2*a);
       r2 = r1;
       printf("\n Raizes da funcao quadratica: \n");
       printf("Raiz1 %d ", r1);
       printf("Raiz2 %d ", r2);
    }
    else
        if (delta > 0)
    {
        r1 = (-b-(sqrt(delta)))/(2*a);
        r2 = (-b+(sqrt(delta)))/(2*a);
        printf("\n\n Raizes da funcao quadratica:\n\n\n");
        printf("\n Raiz1: %d ", r1);
        printf("\n Raiz2: %d ", r2);
    }
    else
        if (delta < 0)
        {
           printf("\n Raizes nao reais \n");
        }
    return 0;
}

int Delta(int a, int b, int c)
{
    int delta;
    delta = (b*b)-(4*a*c);
    return delta;
}
