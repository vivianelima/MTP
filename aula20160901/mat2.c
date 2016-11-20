#include <stdio.h>
#include <math.h>
int main()
{
    float lad1,lad2;
    double angulo, lado;

    printf("Informe o primeiro lado do triangulo: ");
    scanf("%g", &lad1);
    printf("Informe o segundo lado do triangulo: ");
    scanf("%g", &lad2);

    printf("Agora informe o angulo formado entre eles:");
    scanf("%lf", &angulo);

    lado = sqrt(pow(lad1,2)+pow(lad2,2)- 2*lad1*lad2*cos(angulo));

    printf("\nO terceiro lado eh: %lf\n", lado);

    return 0;
}
