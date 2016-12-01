#include <stdio.h>
#include <string.h>
#include<time.h>

void gravar_Dados();

int main()
{
	

	gravar_Dados();
	return 0;
}

void gravar_Dados()
{
	srand(time(0));
	int n, i;	
	printf("Quantos numeros aleatorios deseja gravar?\n");
	scanf("%d", &n);
	
	char nome[256];
	printf("\nQual nome deseja dar para o arquivo?");
	gets(nome);
	FILE * arquivo;
	arquivo = fopen("arquivo.txt","w");
	if(arquivo == NULL)
		fprintf(stderr,"\n\nErro na gravacao!\n");
	for(i = 0; i < n; i++)
		fprintf(arquivo, "%d\n", rand()%100);
	fclose(arquivo);
}


