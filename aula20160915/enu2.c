#include <stdio.h>

int main()
{
	int mes;
	printf("Digite o numero referente ao mes do seu nascimento: ");
	scanf("%d", &mes);
	
	switch(mes)
	{
	
		case 1:
			printf("\njaneiro");
				break;
		case 2:
			printf("\nfevereiro");
				break;
		case 3:
			printf("\nmarço");
				break;
		case 4:
			printf("\nabril");
				break;	
		case 5:
			printf("\nmaio");
				break;
		case 6:
			printf("\njunho");
				break;		
		case 7:
			printf("\njulho");
				break;
		case 8:
			printf("\nagosto");
				break;
		case 9:
			printf("\nsetembro");
				break;
		case 10:
			printf("\noutubro");
				break;
		case 11:
			printf("\nnovembro");
				break;
		case 12:
			printf("\ndezembro");
				break;
	}	
	return(0);
}
