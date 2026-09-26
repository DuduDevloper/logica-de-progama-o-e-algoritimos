#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
	
	int num1, num2, num3;
	
	printf("Insira o primeiro numero: ");
	scanf("%d", &num1);

	printf("Insira o segundo numero: ");
	scanf("%d", &num2);

	printf("Insira o terceiro numero: ");
	scanf("%d", &num3);

	if (num1 > num2 && num1 > num3) {
		printf("O maior numero e: %d\n", num1);
	} else if (num2 > num1 && num2 > num3) {
		printf("O maior numero e: %d\n", num2);
	} else {
		printf("O maior numero e: %d\n", num3);
	}

	return 0;
}
