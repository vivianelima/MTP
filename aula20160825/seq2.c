#include <stdio.h>
int main()
{
    float H,B, area;
    printf("Escreva a altura do triangulo: ");
    scanf("%f", &H);
    printf("\nAgora escreva a base do triangulo: ");
    scanf("%f", &B);
    area = (B*H)/2;
    printf("\nA area do triangulo e: %.4f\n", area);
    return 0;

}
