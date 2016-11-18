#include <stdio.h>
int main ()

{
    float lado_quad, area_quad;
    printf("Entre com o lado do quadrado:");
    scanf("%f", &lado_quad);
    area_quad = lado_quad*lado_quad;
    printf("A area do quadrado e: %.2f\n", area_quad);
	return 0;
}
