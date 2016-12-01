#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i, total;
    char carct =13;
    char contrario[256];
    
    printf("Entre com uma frase: ");
    fflush(stdin);
    gets(contrario);
    total = strlen(contrario);
    printf("\n\n"); 
    
    for(i = 0; i < total; i++)
    {
		if((contrario[i] < 'N'&& contrario[i] > 64) || (contrario[i] < 'n'&& contrario[i] > 97))
		 	contrario[i]= contrario[i]+carct;
		 	
		else
		 	contrario[i] = contrario[i]-carct;
    
	}
	printf("\n\n");
	
	for(i=0; i<total; i++)
		printf("%c", contrario[i]);
	
	return 0;
}
