#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
	 
	float altura, peso, imc;

	printf("Insira sua altura em metros: ");
	scanf("%f", &altura);

	printf("Insira seu peso em kg: ");
	scanf("%f", &peso);

	imc = peso / (altura * altura);

	if (imc < 18.5) {
		printf("Abaixo do peso\n");
	} else if (imc >= 18.5 && imc < 24.9) {
		printf("Peso adequado\n");
	} else if (imc >= 25 && imc < 29.9) {
		printf("Sobrepeso\n");
	} else if (imc > 30) {
		printf("Obesidade\n");
	}
	

	return 0;
}
