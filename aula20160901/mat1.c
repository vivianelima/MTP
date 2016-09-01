#include <stdio.h>
#include <math.h>

int main()
{
    double P1_x, P1_y, P2_x, P2_y, distancia;

    printf("Entre com X de P1: ");
    scanf("%lf", &P1_x);

    printf("Entre com Y de P1: ");
    scanf("%lf", &P1_y);

    printf("Entre com X de P2: ");
    scanf("%lf", &P2_x);

    printf("Entre com Y de P2: ");
    scanf("%lf", &P2_y);

    distancia = sqrt(pow(P2_x - P1_x,2.)+ pow(P2_y - P1_y,2.));

    printf("A distancia entre os pontos eh %lf\n", distancia);

    return 0;
}
