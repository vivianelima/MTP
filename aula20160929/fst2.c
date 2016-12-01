#include <stdio.h>

struct Soma {
	int numerador;
	int denominador;
};

struct Soma soma(int num, int num2, int den1, int den2);

int main() {
	struct Soma resposta;
	int num, den1, num2, den2;
	printf("Entre com o numerador e o denominador: ");
	scanf("%d" "%d",&num,&den1);
	printf("\nEntre com o numerador e o denominador: ");
	scanf("%d" "%d",&num2,&den2);
	resposta = soma(num, num2, den1, den2);
	printf("A soma dos numeros eh: %d/%d\n", resposta.numerador, resposta.denominador);
	return 0;
}

struct Soma soma(int num, int num2, int den1, int den2) {
	struct Soma resposta;
	resposta.numerador = num*den2 + num2*den1;
	resposta.denominador = den2*den1;
	return resposta;
}
