#include <stdio.h>
#include <time.h>

int main()
{
    int i, vet[1000], num, maximo, minimo, alet;
	srand(time(0));
    printf("Entre com um numero de 1 a 1000: \n");
    scanf("%d", &num);
    for(i = 0; i < num; i++)
    {
    	alet = rand()%10;	
     	vet[i] = alet;
    }
     	minimo = vet[0];
     	maximo = vet[0];
	for(i= 0; i < num-1; i++)
	{
		
		if(minimo > vet[i+1])
		minimo = vet[i+1];
	
}
 for(i= 0; i < num-1; i++)
	{
		
		if(maximo < vet[i+1])
		maximo = vet[i+1];
	
}
printf("O valor maximo eh: %d\n", maximo);
printf("O valor minimo eh: %d\n\n", minimo);
    return 0;
}

