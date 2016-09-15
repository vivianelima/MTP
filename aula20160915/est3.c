#include <stdio.h>
#define QTDEMAX 1000


struct CAD
{
	char nome[100];
	int idade;
	int telefone;
};

int main()
{
	int opc, i, qtde = 0, esc;
	struct CAD cadastro [QTDEMAX];
	
	while(1)
	{
		printf("1 - cadastr, 2 - sair;");
		scanf("%d", &opc);
		if(opc == 2)
		break;
		else
		{
			
			printf("\nDigite o nome: ");
			fflush(stdin);
			gets(cadastro[qtde].nome);
			printf("\nDigite a idade: ");
			fflush(stdin);
			scanf("%d", &cadastro[qtde].idade);
			fflush(stdin);
			printf("\nDigite o telefone: ");
			scanf("%d", &cadastro[qtde].telefone);
		}
		
		qtde ++;

	}
	printf("\nEscolha o que voce deseja listar?");
	printf("\n1- nomes");
	printf("\n2- idades");
	printf("\n3- telefones");
	
	scanf("%d", &esc);
	
   switch( esc) 
   {
    case 1:
    	for(i = 0; i < qtde; i++)
      printf("\nOs nomes listados sao: %s \n", cadastro[i].nome);
    break;
    
  case 2:
   for(i = 0; i < qtde; i++)
      printf("As idades listadas sao: %d\n", cadastro[i].idade);
    break;
    
  case 3:
    
   for(i = 0; i < qtde; i++)
      printf("As idades listadas sao: %d\n", cadastro[i].idade);
      break;
  }
	
	return 0;
}
