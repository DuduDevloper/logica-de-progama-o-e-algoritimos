#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
	int idade;
	printf("Insira sua idade: ");
	scanf("%d", &idade);

	if (idade < 18) {
		printf("Voce e menor de idade.\n");
	} else {
		printf("Voce e maior de idade.\n");
	}

	return 0;
}

