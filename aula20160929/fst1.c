#include <stdio.h>

struct Divisao {
	int quociente;
	int rest;
};

struct Divisao divisao(int dividendo, int divisor);

int main() {
	struct Divisao resposta;
	int dividendo, divisor;
	printf("Entre com o dividendo: ");
	scanf("%d",&dividendo);
	printf("Entre com o divisor: ");
	scanf("%d",&divisor);
	resposta = divisao(dividendo, divisor);
	printf("Quociente: %d; Resto: %d\n", resposta.quociente, resposta.rest);
	return 0;
}

struct Divisao divisao(int dividendo, int divisor) {
	struct Divisao resposta;
	resposta.quociente = dividendo / divisor;
	resposta.rest = dividendo % divisor;
	return resposta;
}
