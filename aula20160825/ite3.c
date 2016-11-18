#include<stdio.h>
int main()
{
	char palavra[256];
	int i=0, quant;
	printf("Escreva uma palavra: \n");
	scanf("%s", palavra);
	do 
	{
		palavra[i];
		i++;
		
	}
	while(palavra[i] !=NULL );
	
	quant = i;
	printf("A palavra tem %d letras", quant);
	
	return 0;
}
