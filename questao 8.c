#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

	float horas_trabalhadas, valor_hora, salario;
	
	printf("Insira a quantidade de horas trabalhadas: ");
	scanf("%f", &horas_trabalhadas);

	printf("Insira o valor da hora: ");
	scanf("%f", &valor_hora);

	salario = horas_trabalhadas * valor_hora;
	printf("O salario e: %.2f\n", salario);

	return 0;
}
