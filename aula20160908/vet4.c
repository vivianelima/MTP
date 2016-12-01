#include <stdio.h>
#include <time.h>

int main()
{
    int i, vet[1000], num, max, min, aleatorio;
	srand(time(0));
    printf("Entre com um numero de 1 a 1000: \n");
    scanf("%d", &num);
    for(i = 0; i < num; i++)
    {
    	aleatorio = rand()%10;	
     	vet[i] = aleatorio;
    }
     	min = vet[0];
     	max = vet[0];
	for(i= 0; i < num-1; i++)
	{
		
		if(min > vet[i+1])
		min = vet[i+1];
	
}
 for(i= 0; i < num-1; i++)
	{
		
		if(max < vet[i+1])
		max = vet[i+1];
	
}
printf("O valor maximo eh: %d\n", max);
printf("O valor minimo eh: %d\n\n", min);
    return 0;
}

