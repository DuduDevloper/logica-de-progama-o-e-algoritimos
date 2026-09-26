#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
	
	float distancia, combustivel, consumo_medio;

	printf("Insira a distancia percorrida em quilometros: ");
	scanf("%f", &distancia);

	printf("Insira a quantidade de combustivel consumido em litros: ");
	scanf("%f", &combustivel);

	consumo_medio = distancia / combustivel;

	printf("O consumo medio do veiculo é: %.2f km/l\n", consumo_medio);


	return 0;
}
