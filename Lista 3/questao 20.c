#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
	 
	float num1, num2, resultado;
	char operacao;

	printf("Insira primeiro numero: ");
	scanf("%f", &num1);
	printf("Insira segundo numero: ");
	scanf("%f", &num2);

	printf("Escolha a operacao (+, -, *, /): ");
	scanf(" %c", &operacao);

	switch (operacao) {
		case '+':
			resultado = num1 + num2;
			break;
		case '-':
			resultado = num1 - num2;
			break;
		case '*':
			resultado = num1 * num2;
			break;
		case '/':
			if (num2 == 0) {
				printf("Erro: divisao pro zero!\n");
				return 1;
			}
			resultado = num1 / num2;
			break;
		default:
			printf("Operacao invalida\n");
			return 1;
	}

	printf("Resultado: %.2f\n", resultado);
	return 0;
}
