#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

	float valor_compra, valorDesconto, valorFinal, desconto;

	printf("valor da compra: ");
	scanf("%f", &valor_compra);

	if (valor_compra <= 100) {
		desconto = 0;
	} else if (valor_compra <= 500) {
		desconto = 5;
	} else {
		desconto = 10;
	}
		valorDesconto = (valor_compra * desconto) / 100;
		valorFinal = valor_compra - valorDesconto;

		printf("\nvalor original: %.2f", valor_compra);
		printf("\nvalor do desconto: %.2f", valorDesconto);
		printf("\nvalor final: %.2f", valorFinal);
	
	return 0;
}
