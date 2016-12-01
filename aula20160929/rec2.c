#include <stdio.h>

 int soma(int A[],int n);
 
 int main()
 {
 	int A[]={1,3,5,7,9,11,13,15,17,19,21,23,25,27,29};
 	int n = sizeof(A)/sizeof(int);
 	
	printf("A soma dos elementos do vetor eh: %d",iguais(A,n));
 	return(0);
 }
 
int iguais(int A[],int n)
{
	int soma = 0;
	int i;	
 		for(i =0; i < n; i++)
 			soma = soma + A[i];
 	return soma;	
}
