#include<stdio.h>
int main()
{
    int numero, i , fat;
    printf("Entre com um numero: ");
    scanf("%d", &numero);
    fat = 1;
    
    for(i = 1; i <= numero; i++)
    	{
    		fat = fat*i;
		}
        
        
    printf("O fatorial de %d e igual %d.\n", numero, fat);
    return 0;
}
