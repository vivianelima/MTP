#include <stdio.h>
int main()
{
	int num, i;
	double  invert1,soma1=0;
	float  invert2, soma2=0;
	
	printf("Digite um numero: ");
	
	scanf("%d", &num);
	invert1= (1.0/num);
	invert2= (1.0/num);
	
	for(i=0; i < 729; i++)
	{
		soma1 = soma1+ invert1;
		soma2 = soma2+ invert2;
	}
	
	printf("Soma 1(float): %.15g\n", soma2);
	printf("Soma 2(double): %.15g\n", soma1);
	
	return 0;
}
