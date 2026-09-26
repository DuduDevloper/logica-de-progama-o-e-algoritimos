#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
	int base, altura;
	
	printf("Digite o valor da base: ");
	scanf("%d", &base);

	printf("Digite o valor da altura: ");
	scanf("%d", &altura);

	printf("A area do retangulo e: %d\n", base * altura);

	return 0;
}
