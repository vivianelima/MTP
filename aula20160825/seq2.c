#include <stdio.h>
int main()
{
    float Alt,Base, Area;
    printf("Escreva a altura do triangulo: ");
    scanf("%f", &Alt);
    printf("\nAgora escreva a base do triangulo: ");
    scanf("%f", &Base);
    Area = (Base*Alt)/2;
    printf("\nA area do triangulo e: %.4f\n", Area);
    return 0;

}
