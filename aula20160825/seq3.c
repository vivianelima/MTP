#include<stdio.h>
int main()
{

    float A, B, C, Nota;
    printf("Escreva as tres notas do aluno:\n");
    
    printf("Nota 1: ");
    scanf("%f", &A);
    
    printf("\nNota 2: ");
    scanf("%f", &B);
    
    printf("\nNota 3: ");
    scanf("%f", &C);
    
    Nota = ((A*2)+(B*3)+(C*5))/10;
    
    printf("\n A nota do aluno e: %.1f", Nota);
    
    return 0;
}
