#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

	float num;

	printf("Insira o numero: ");
	scanf("%f", &num);

	if (num > 0) {
		printf("O numero %.2f e positivo\n", num);
	} else if (num < 0) {
		printf("O numero %.2f e negativo\n", num);
	} 
	
	return 0;
}
