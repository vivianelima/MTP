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
	int opc, i, quantidade = 0, esc;
	struct CAD cadastro [QTDEMAX];
	
	while(1)
	{
		printf("1 - cadastro, 2 - sair;\n");
		scanf("%d", &opc);
		if(opc == 2)
		break;
		else
		{
			
			printf("\nDigite o nome: ");
			fflush(stdin);
			gets(cadastro[quantidade].nome);
			printf("\nDigite a idade: ");
			fflush(stdin);
			scanf("%d", &cadastro[quantidade].idade);
			fflush(stdin);
			printf("\nDigite o telefone: ");
			scanf("%d", &cadastro[quantidade].telefone);
		}
		
		quantidade ++;

	}
	printf("\nEscolha o que voce deseja listar?");
	printf("\n1- nomes");
	printf("\n2- idades");
	printf("\n3- telefones\n");
	
	scanf("%d", &esc);
	
   switch( esc) 
   {
    case 1:
    	printf("\nOs nomes listados sao:" );
    	for(i = 0; i < quantidade; i++)
      printf("\n%s\n", cadastro[i].nome);
    break;
    
  case 2:
  	  printf("As idades listadas sao:");
   	  for(i = 0; i < quantidade; i++)
      printf("\n%d\n", cadastro[i].idade);
    break;
    
  case 3:
     printf("As idades listadas sao:");
   for(i = 0; i < quantidade; i++)
      printf("\n%d\n", cadastro[i].idade);
      break;
  }
	
	return 0;
}
