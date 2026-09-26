#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
	
	float nota1, nota2, media;
	

	printf("Insira a primeira nota: ");
	scanf("%f", &nota1);

	printf("Insira a segunda nota: ");
	scanf("%f", &nota2);

	media = (nota1 + nota2) / 2;

	if (media >= 7) {
		printf("Aprovado com media: %.2f\n", media);
	} else if (media >= 5 && media < 7) {
		printf("Recuperacao: %.2f\n", media);
	} else {
		printf("Reprovado com media: %.2f\n", media);
	}
	return 0;
}
