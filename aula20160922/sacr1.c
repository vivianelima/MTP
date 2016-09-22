#include <stdio.h>
#include<stdlib.h> // rand
#include <time.h>

int pega_cartas();
char mostra_carta();

int main()
{
	srand(time(0));
	int carta1 = pega_cartas(), carta2 = pega_cartas();
	int i, ncartas, soma= 0, carta;
	
	printf("Quantas cartas voce quer?\n");
	scanf("%d", &ncartas);
	
	for(i= 0; i < ncartas; i++)
	{
		carta = pega_cartas();
		printf("%c ", mostra_carta(carta));
		soma = soma + carta;
	}
	if(soma > 21)
	printf("Voce pedeu!!!\n");
	else
	{
		printf("\nBanca: %c %c\n", mostra_carta(carta1), mostra_carta(carta2));
		if(soma > carta1 + carta2)
			printf("Voce ganhou");
		else
			printf("voce perdeu!\n");
	}
	return 0;
}

int pega_cartas()
{
	int carta = rand()%13 + 1;
	return carta;
}
char mostra_carta(int carta)
{
	char figura;
	switch(carta)
	{
		case 1: figura ='A';
		break;
		case 10: figura ='D';
		break;
		case 11: figura ='J';
		break;
		case 12: figura ='Q';
		break;
		case 13: figura ='K';
		break;
		default: figura = 48 + carta;
		
	}
	return figura;
}
