#include <stdio.h>
#include <math.h>
int main()
{
    float l1,l2;
    double angulo, lado;

    printf("Informe o primeiro lado do triangulo: ");
    scanf("%g", &l1);
    printf("Informe o segundo lado do triangulo: ");
    scanf("%g", &l2);

    printf("Agora informe o angulo formado entre eles:");
    scanf("%lf", &angulo);

    lado = sqrt(pow(l1,2)+pow(l2,2)- 2*l1*l2*cos(angulo));

    printf("\nO terceiro lado eh: %lf\n", lado);

    return 0;
}
