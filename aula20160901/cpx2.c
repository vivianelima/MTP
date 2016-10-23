#include <stdio.h>
#include <complex.h>

int main()
{
    double complex Z1, Z2, prod, conjug;
    double preal, pimag;

    printf("Entre com a parte real de Z: ");
    scanf("%lf", &preal);
    printf("Entre com a parte imaginaria de Z: ");
    scanf("%lf", &pimag);

    Z1 = preal + pimag*I;
	printf("%lf", complex conj(Z1));
	prod = Z1*Z2;
    printf("O conjulgado do numero e: %lf\n");
    return 0;
}
