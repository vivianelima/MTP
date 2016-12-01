#include <stdio.h>
int main()
{
 double numeroA, numeroB;
 double soma;
 printf("Digite dois numeros reais: \n");
 scanf("%lf", &numeroA);
 scanf("%lf", &numeroB);

 //unsigned char *ponteiro= NULL;
 printf("\n%p : %lf\n", &numeroA, numeroA);
 printf("\n%p : %lf\n", &numeroB, numeroB);

 soma = numeroA + numeroB;
 printf("\n%p : %lf\n", &soma, soma);
 return 0;
}
