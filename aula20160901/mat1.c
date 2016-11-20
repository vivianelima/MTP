#include <stdio.h>
#include <math.h>

int main()
{
    double PA_x, PA_y, PB_x, PB_y, distan;

    printf("Entre com X de P1: ");
    scanf("%lf", &PA_x);

    printf("Entre com Y de P1: ");
    scanf("%lf", &PA_y);

    printf("Entre com X de P2: ");
    scanf("%lf", &PB_x);

    printf("Entre com Y de P2: ");
    scanf("%lf", &PB_y);

    distan = sqrt(pow(PB_x - PA_x,2.)+ pow(PB_y - PA_y,2.));

    printf("A distancia entre os pontos eh %lf\n", distan);

    return 0;
}
