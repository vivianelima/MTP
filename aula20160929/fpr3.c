#include <stdio.h>

 void iguais(int A[],int B[],int m,int n);
 
 int main()
 {
 	int A[]={1,3,5,7,9,11,13,15,17,19,21,23,25,27,29};
 	int n = sizeof(A)/sizeof(int);
 	int B[]={1,2,3,4,5,6,8,10,12,7,29};
 	int m = sizeof(B)/sizeof(int);
 	
	iguais(A,B,m,n);
 	return(0);
 }
 
void iguais(int A[],int B[],int m,int n)
{
	int i, j;	
 		for(i =0; i < m; i++)
 			for(j=0;j<n;j++)
 				{
		 
 					if(B[i]==A[j])
 					printf("%d, ", B[i]);
 				}	
}
