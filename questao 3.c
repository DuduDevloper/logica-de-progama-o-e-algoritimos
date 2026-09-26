#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

	int n1;
	int n2;
	int soma;
	int subtracao;
	int multiplicacao;
	int divisao;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	
	subtracao = n1 - n2;
	
	multiplicacao = n1 * n2;
	
	divisao = n1/n2;
	
	printf("Resultado da soma: %d", soma);
	
	printf("\nResultado da subtracao: %d", subtracao);
	
	printf("\nResultado da multiplicacao: %d", multiplicacao);
	
	printf("\nResultado da divisao: %d", divisao);
	
	
	return 0;
}
