#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
	float raio, area;
	
	printf("Insira o valor do raio do circulo: ");
	scanf("%f", &raio);

	area = (raio * raio) * 3.14159;
	printf("A area do circulo e: %.2f\n",area);

	return 0;
}
