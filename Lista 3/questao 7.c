#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

	float celsius, fahrenheit;

	printf("Insira temperature em Celsius: ");
	scanf("%f", &celsius);

	fahrenheit = (celsius * 9/5) + 32;

	printf("A temperature em Fahrenheit e: %.2f\n", fahrenheit);

	return 0;
}
