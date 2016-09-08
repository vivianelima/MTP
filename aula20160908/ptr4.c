#include <stdio.h>
int main()
{
 double numA, numB;
 double soma;
 printf("Digite dois numeros reais: \n");
 scanf("%lf", &numA);
 scanf("%lf", &numB);

 //unsigned char *ponteiro= NULL;
 printf("\n%p : %lf\n", &numA, numA);
 printf("\n%p : %lf\n", &numB, numB);

 soma = numA + numB;
 printf("\n%p : %lf\n", &soma, soma);
 return 0;
}
