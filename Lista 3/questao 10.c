#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

	char nomeProduto[100];
	int quantidadeComprada;
	float precoUnitario, total;

	printf("Nome do produto: ");
	scanf("%s", nomeProduto);

	printf("Insira a quantidade comprada: ");
	scanf("%d", &quantidadeComprada);

	printf("Insira o preço unitario: ");
	scanf("%f", &precoUnitario);

	total = quantidadeComprada * precoUnitario;
	printf("O total da compra e: %.2f\n", total);

	return 0;
}
