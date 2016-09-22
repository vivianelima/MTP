#include <stdio.h>
#include<stdlib.h> // rand
#include <time.h>
#include <string.h>

void roboEd();

int main()
{ 
srand (time(0));
char frase_usuario[256];
printf("*Ola tudo bem? Quer conversar comigo?\n");
do
{
	fgets(frase_usuario,sizeof(frase_usuario), stdin);
	roboEd();
}
while(strncmp(frase_usuario, "tchau", 5) != 0); // strncmp permite comparar so o numero de carcteres ue eu desejo
printf("*Ate a proxima vez!!!");
return 0;
}

void roboEd()
{
	switch(rand()%7)
	{
 		case 0: printf("*Tudo bem?\n");
 	break;
		case 1: printf("*Ok\n");
	break;
		case 2: printf("*LOL! \n");
	break;
		case 3: printf("*Que legal!!!\n");
 	break;
		case 4: printf("*Que chato...\n");
 	break;
		case 5: printf("*Fale mais sobre isso\n");
 	break;
		case 6: printf("*Sobre o que quer falar?\n");
 	break;

	} 
}
