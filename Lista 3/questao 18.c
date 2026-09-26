#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

	int idade;

	printf("Insira sua idade: ");
	scanf("%d", &idade);

	if (idade <= 12){
		printf("Voce e uma crianca.\n");
	} else if (idade <= 17){
		printf("Voce e um adolescente.\n");
	} else if (idade <= 59){
		printf("Voce e um adulto.\n");
	} else {
		printf("Voce e um idoso.\n");
	
	}

	return 0;
}

