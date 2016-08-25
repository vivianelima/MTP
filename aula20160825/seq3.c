#include<stdio.h>
int main()
{

    float A, B, C, nota;
    printf("Escreva as tres notas do aluno:\n");
    printf("Nota A: ");
    scanf("%f", &A);
    printf("\nNota B: ");
    scanf("%f", &B);
    printf("\nNota C: ");
    scanf("%f", &C);
    nota = ((A*2)+(B*3)+(C*5))/10;
    printf("\n A nota do aluno e: %.1f", nota);
    return 0;
}
