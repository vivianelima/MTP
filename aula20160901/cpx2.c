#include <stdio.h>
#include <complex.h>

int main()
{
    double complex Z1, Z2, produto;
    double preal, pimag;

    printf("Entre com a parte real de Z: ");
    scanf("%lf", &preal);
    printf("Entre com a parte imaginaria de Z: ");
    scanf("%lf", &pimag);

    Z1 = preal + pimag*I;
	Z2 = conj(Z1);
	produto = Z1*Z2;
    printf("O produto do numero pelo seu conjulgado e: %lf + %lf*I\n", creal(produto), cimag(produto));
    return 0;
}
