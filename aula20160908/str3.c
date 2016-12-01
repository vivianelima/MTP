#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i, j, total;
    char frase[256];
    char contrario[256];
    
    printf("Entre com uma frase: ");
    gets(frase);
    total = strlen(frase);
    j = total-1;
    contrario[total] ='\0';
    
    for (i = 0; i < total; i++)
    	{
			contrario[j] = frase[i];
    		j--;
		}

	 if(strcmp(contrario,frase) != 0)
	 
		 printf("\n\nNao eh palindromo\n\n\n");
		 
	else
	
		printf("A PALVRA EH UM PALINDROMO!!!\n\n\n");
	
	return 0;
}
