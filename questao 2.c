#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

	int n1;
	int n2;
	int soma;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	printf("\nNumero 1: %d", n1);
	printf("\nNumero 2: %d", n2);
	
	soma = n1 + n2;
	
	printf("\nResultado da soma: %d", soma);
	
	
	return 0;
}
